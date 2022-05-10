set term pdf
set out "productoMatrices.pdf"
set log xy
set xlabel "Time"
set ylabel "Size"
plot 'datost1.txt', 'datost2.txt', 'datost4.txt', 'datost8.txt'

