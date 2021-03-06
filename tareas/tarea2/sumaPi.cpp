// sum_{n=0}^{N} (-1)^n/(2n+1) \simeq pi/4 // funcion1
// 1 - 1/3 + 1/5 - 1/7 + 1/9 + ...
// 1 + 1/5 + 1/9 + ... - (1/3 + 1/7 + 1/11 + ...) = sum 1/(4*n + 1) - sum 1/(4*n+3) // funcion2
// sum 2/((4*n+1)(4*n+3)) // funcion3

#include <iostream> // header para imprimir a pantalla
#include <cmath> // funciones y constantes matematicas, como fabs (valor absoluto) y M_PI (numero pi)
#include<iomanip>
#include <fstream>
// declaracion de las funciones (no cambiar)
// n es el numero de terminos de la suma.
// tener en cuenta como cambian los limites cuando se usan f2 y f3
float f1(int n);
float f2(int n);
float f3(int n);

int main(int argc, char **argv)
{
  // configurar std::cout para que imprima en notacion cientifica y con 7 cifras decimales (precision de float

  std:: ofstream out ("diferenciasPorcentuales.xlsx");
  for(int ii = 1; ii <=10000; ++ii) {
    
    // Aproximacion de numero pi con cada forma de la suma
    float pi1 =4*f1(ii);
    float pi2 =4*f2(ii);
    float pi3 =4*f3(ii);
   
    // calcular las diferencias porcentuales
    // std::cout<<std::setprecision(8)<<std::scientific << ii << "    " << pi1<< "    " << pi2<<"   "<<pi3<<std::endl;
    float delta1 = std::fabs(pi1 - M_PI)/M_PI;
    float delta2 = std::fabs(pi2 - M_PI)/M_PI;
    float delta3 = std::fabs(pi3 - M_PI)/M_PI;
    // imprimir
    out<<std::setprecision(7)<<std::scientific<< ii<< "," << delta1 << "," << delta2 << "," << delta3 << "\n";
    std::cout<<std::setprecision(7)<<std::scientific<< ii<<" "<< "    " << delta1 << "   " << delta2 << "   " << delta3 << "\n";
  }
  out.close();

  return 0;
}
// ----------- ACA DEBE ESCRIBIR LA IMPLEMENTACION DE LAS FUNCIONES -----------
// TODO implementacion de las funciones
float f1(int n)
{
  float piCuartos = 0;
  for(int i= 0; i<=n; i++){
    piCuartos+=std::pow(-1,i)/((2*i) + 1); 
  } 
  return piCuartos;
  // escribir aca la implementacion de la forma	original de la suma hasta n terminos
  
}

float f2(int n)
{
  float piCuartos1=0;
  float piCuartos2=0;
  int limite1;
  int limite2;
  if(n%2 == 0){
    limite1 = n/2;
    limite2 = n/2-1;
  }else{
    limite1 = n/2;
    limite2 = n/2;
  }
  // std::cout<<limite1<<"    "<<limite2<<std::endl;
  for(int i=0; i<=limite1; i++){
    piCuartos1 += 1.0/(4.0*i + 1);
  }
   for(int i=0; i<=limite2; i++){
    piCuartos2 += 1.0/(4.0*i+3);
  }
  
  
   return piCuartos1 - piCuartos2;
  // escribir aca la implementacion de la segunda forma de la suma hasta n terminos totales
}

float f3(int n)
{
  float piCuartos = 0;
  int limite = n/2;
  
  for(int i = 0; i<= limite ; i++){
    piCuartos += 2.0/((4.0*i+1.0)*(4.0*i+3.0));
    // std::cout<<((4.0*n+1.0)*(4.0*n+3.0))<<std::endl;
  }
  if(n%2 == 0){
    piCuartos += 1.0/(4.0*((n/2))+3);
  }
  return piCuartos;
  // escribir aca la implementacion de la tercera forma de la suma hasta n terminos totales
}

