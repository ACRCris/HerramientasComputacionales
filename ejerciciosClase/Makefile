sumupdown.pdf: datos.txt script.gp
	gnuplot script.gp

datos.txt: sumaUPsumaDOWN.x
	./sumaUPsumaDOWN.x > datos.txt

sumaUPsumaDOWN.x: sumaUPsumaDown.cpp
	g++ sumaUPsumaDown.cpp -o sumaUPsumaDOWN.x
