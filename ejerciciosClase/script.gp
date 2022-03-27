#+begin src gnuplot : angle codes/script.gp
set term pdf
set out "sumupdown.pdf"
set xlabel "Nterms"
set ylabel "Porcentual difference"
plot 'datos.txt'
#+end_src