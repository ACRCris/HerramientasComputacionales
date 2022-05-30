set term pdf
set out "grafica.pdf"
set key font ",4"
set style line 4 \
    linecolor rgb '#0060ad' \
    linetype 1 linewidth 1 \
    pointtype 7 pointsize 0.25


plot 'grafica.txt'