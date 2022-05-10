set term pdf
set out "productoMatrices.pdf"
set log xy
set xlabel "Time"
set ylabel "Size"
plot 'datost1.txt' w lp, 'datost2.txt' w lp, 'datost4.txt' w lp, 'datost8.txt' w lp

