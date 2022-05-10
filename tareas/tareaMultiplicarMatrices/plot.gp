set term pdf
set out "productoMatrices.pdf"
# set xlabel "Nterms"
# set ylabel "Percentual difference"
set log xy
plot 'datost1.txt' w lp lw 3
replot 'datost2.txt' w lp lw 3
replot 'datost4.txt' w lp lw 3
replot 'datost8.txt' w lp lw 3
