#+begin src gnuplot : angle codes/script.gp
set term pdf
set out "sumupdown.pdf"
set xlabel "Nterms"
set ylabel "Porcentual difference"
plot 'data.txt' u 1:4 w lp pt 4
#+end_src