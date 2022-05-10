set term pdf
set out "sumupdown.pdf"
# set xlabel "Nterms"
# set ylabel "Percentual difference"
plot 'datost1.txt' w lp lw 3
plot 'datost2.txt' w lp lw 3
plot 'datost4.txt' w lp lw 3
plot 'datost8.txt' w lp lw 3
