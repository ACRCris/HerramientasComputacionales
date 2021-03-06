set term pdf
set out "productoMatrices.pdf"

set grid
set xlabel "Time"
set ylabel "Size"
set log xy
set key font ",4"
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
    
plot 'datost1.txt' using 1:2:3 with yerrorbars linestyle 4 title "1 thread", '' with linespoints linestyle 4, 'datost2.txt' using 1:2:3 with yerrorbars linestyle 3 title "2 threads", '' with linespoints linestyle 3, 'datost4.txt' using 1:2:3 with yerrorbars linestyle 2 title "4 threads", '' with linespoints linestyle 2, 'datost8.txt' using 1:2:3 with yerrorbars linestyle 1 title "8 threads", '' with linespoints linestyle 1 

