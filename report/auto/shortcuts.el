(TeX-add-style-hook
 "shortcuts"
 (lambda ()
   (TeX-run-style-hooks
    "listings"
    "inconsolata")
   (TeX-add-symbols
    '("mvf" 1)
    '("authnote" 2)
    "helveticafont"))
 :latex)

