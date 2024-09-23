;; comments
(comment) @comment

;; punctuation
[
  "\\"
  ; "("
  ; ")"
  "{"
  "}"
  ; "["
  ; "]"
] @punctuation.bracket

;; builtin commands
(p "p" @function.builtin)
(em "em" @function.builtin)
(strong "strong" @function.builtin)
(li "li" @function.builtin)
(ol "ol" @function.builtin)
(ul "ul" @function.builtin)
(code "code" @function.builtin)
(blockquote "blockquote" @function.builtin)
(pre "pre" @function.builtin)
(tex "tex" @function.builtin)

;; meta keywords
(ref "ref" @keyword)
(title "title" @keyword)
(taxon "taxon" @keyword)
(date "date" @keyword)
(meta "meta" @keyword)
(author "author" @keyword)
(contributor "contributor" @keyword)
(parent "parent" @keyword)
(number "number" @keyword)
(tag "tag" @keyword)

;; special meta markups
(title (_) @markup.heading)
(author (_) @markup.link.label)

;; list markups
(li "li" @markup.list)
(ul "ul" @markup.list)
(ol "ol" @markup.list)

;; special markup
(em (_) @markup.italic)
(strong (_) @markup.strong)
(code (_) @markup.raw)
(blockquote (_) @markup.raw.block)

; TODO(jinser): fine-tune command highlight
(command (qualified_ident (ident) @function.call) !path !method)
; (command (qualified_ident (ident_path (ident) @function.call .)))
; (command (qualified_ident
;            (ident) @module
;            (ident_path "/" @punctuation.delimiter (ident) @module)))
