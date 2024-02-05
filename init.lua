local lazypath = vim.fn.stdpath("data") .. "/lazy/lazy.nvim"
if not vim.loop.fs_stat(lazypath) then
	vim.fn.system({
		"git",
		"clone",
		"--filter=blob:none",
		"https://github.com/folke/lazy.nvim.git",
		"--branch=stable",
		lazypath,
	})
end

vim.opt.rtp:prepend(lazypath)

require("lazy").setup({ "nvim-treesitter/nvim-treesitter" })
local function ensure_treesitter()
	vim.treesitter.language.register("tree", "forester")
	vim.filetype.add({ extension = { tree = "tree" } })
	local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
	parser_config.forester = {
		install_info = {
			url = "https://github.com/kentookura/tree-sitter-forester",
			files = { "src/parser.c" },
			branch = "main",
			generate_requires_npm = false,
			requires_generate_from_grammar = false,
		},
		filetype = "tree",
	}
end
ensure_treesitter()
