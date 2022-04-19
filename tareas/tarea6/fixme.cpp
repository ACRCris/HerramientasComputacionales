#include <iostream>

int main(int argc, char **argv)
{
  double x[10], y[5]; // LA: imprime raro
  //double y[5], x[10]; // LB: imprime 1

  for(int ii = 0; ii < 5; ++ii) {
    y[ii] = ii +1;
  }
  for(int ii = 0; ii < 10; ++ii) {
    x[ii] = -(ii +1);
  }

  //double z = x[10];  index 10 out of bounds for type 'double [10]'
  double z = x[9];
  /*dado que la indexacion en C++ comienza en cero entoces 
    para un array con diez elementos los indices iran de 0 
    hasta 9, por lo que si se intenta acceder a la posicion
    asciado con el indice 10 esta sera la poscion 11 del 
    arreglo generando un index bound error, por lo que la 
    solucion del error consistio en acceder a la ultima posicion
    la cual sera la 9 en este caso.
*/
  std::cout << z << std::endl;

  return 0;
}
