(TeX-add-style-hook
 "paper"
 (lambda ()
   (TeX-add-to-alist 'LaTeX-provided-package-options
                     '(("breakurl" "hyphenbreaks") ("natbib" "numbers" "sort&compress") ("algorithm2e" "ruled" "vlined" "linesnumbered")))
   (add-to-list 'LaTeX-verbatim-environments-local "lstlisting")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "lstinline")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "path")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "url")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "nolinkurl")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "hyperbaseurl")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "hyperimage")
   (add-to-list 'LaTeX-verbatim-macros-with-braces-local "hyperref")
   (add-to-list 'LaTeX-verbatim-macros-with-delims-local "lstinline")
   (add-to-list 'LaTeX-verbatim-macros-with-delims-local "path")
   (TeX-run-style-hooks
    "latex2e"
    "section/abstract"
    "section/intro"
    "section/background"
    "section/related"
    "section/approach"
    "section/limit"
    "section/conc"
    "sig-alternate-05-2015"
    "sig-alternate-05-201510"
    "xcolor"
    "breakurl"
    "natbib"
    "algorithm2e"
    "amssymb"
    "nicefrac"
    "setspace"
    "shortcuts")
   (TeX-add-symbols
    "showComments"
    "sharedaffiliation")
   (LaTeX-add-labels
    "sec:intro"
    "sec:background"
    "sec:related"
    "sec:approach"
    "sec:limit"
    "sec:conc")
   (LaTeX-add-bibliographies
    "publications"))
 :latex)

