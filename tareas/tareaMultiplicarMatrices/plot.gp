set term pdf
set out "productoMatrices.pdf"

set grid
set xlabel "Time"
set ylabel "Size"
set style line 1 \
    linecolor rgb '#0060ad' \
    linetype 1 linewidth 2 \
    pointtype 7 pointsize 0.25
plot 'datost1.txt' w lp, 'datost2.txt' w lp, 'datost4.txt' w lp, 'datost8.txt' with xerrorbars 
plot 'datost8.txt' using 1:2:3 with yerrorbars 