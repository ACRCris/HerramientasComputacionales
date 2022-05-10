set term pdf
set out "productoMatrices.pdf"
set log xy
set grid
set xlabel "Time"
set ylabel "Size"
plot 'datost1.txt' w lp, 'datost2.txt' w lp, 'datost4.txt' w lp, 'datost8.txt' with xerrorbars 
plot 'datost8.txt' using 1:2 pt 7 ps 10