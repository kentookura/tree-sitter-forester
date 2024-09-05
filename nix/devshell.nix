{
  perSystem = { pkgs, inputs', lib, system, ... }:
    let
      forester = inputs'.forester.packages.default;
      foresterExe = lib.getExe' forester "forester";
    in
    {
      packages.default = forester;

      devshells.default = {
        packages =
          let
            tex = (pkgs.texlive.combine {
              inherit (pkgs.texlive) scheme-small latexindent dvisvgm
                pgf tikz-cd spath3
                mathtools amsfonts stmaryrd
                standalone
                ;
            });
          in
          [
            forester
            tex

            pkgs.nodePackages.pnpm
          ];

        commands = [
          {
            category = "forester";
            name = "build";
            command = ''
              ${foresterExe} build forest.toml
            '';
          }
          {
            category = "forester";
            name = "new";
            command = ''
              ${foresterExe} new --dest=trees --prefix=''${1:-jsr}
            '';
          }
        ];

        serviceGroups = {
          liforest = {
            description = "live up forest";
            services = {
              devd.command =
                let
                  port = 8000;
                  devd = lib.getExe' pkgs.devd "devd";
                  whenNotFound = pkgs.writeText "whenNotFound.html"
                    ''
                      <!DOCTYPE html>
                      <html lang="en">
                      <head>
                          <meta charset="UTF-8">
                          <meta name="viewport" content="width=device-width, initial-scale=1.0">
                          <title>Not Found</title>
                      </head>
                      <body>
                          <h1>Welcome to the Forest! 🌟</h1>
                          <p>This is a simple static page that hasn't been built yet. ✨</p>
                          <p>Build it to view. 🎨</p>
                      </body>
                      </html>
                    '';
                in
                ''
                  ${devd} -a -q -l -f ${whenNotFound} -p ${toString port} output/
                '';
            };
          };
        };
      };
    };
}
