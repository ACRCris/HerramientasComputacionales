set term pdf
set out "productoMatrices.pdf"

set grid
set xlabel "Time"
set ylabel "Size"
set log xy
set key font ",4.5"
set style line 1 \
    linecolor rgb '#0060ad' \
    linetype 1 linewidth 1 \
    pointtype 7 pointsize 0.25

set style line 2 \
    linecolor rgb '#ff0000' \
    linetype 1 linewidth 1 \
    pointtype 7 pointsize 0.25

set style line 3 \
    linecolor rgb '#00ff00' \
    linetype 1 linewidth 1 \
    pointtype 7 pointsize 0.25

set style line 4 \
    linecolor rgb '#6a0dad' \
    linetype 1 linewidth 1 \
    pointtype 7 pointsize 0.25
    
plot 'datost1.txt' using 1:2:3 with yerrorbars linestyle 4, '' with linespoints linestyle 4, 'datost2.txt' using 1:2:3 with yerrorbars linestyle 3, '' with linespoints linestyle 3, 'datost4.txt' using 1:2:3 with yerrorbars linestyle 2, '' with linespoints linestyle 2, 'datost8.txt' using 1:2:3 with yerrorbars linestyle 1, '' with linespoints linestyle 1 
plot 'datost8.txt' using 1:2:3 with yerrorbars, '' with linespoints linestyle 1