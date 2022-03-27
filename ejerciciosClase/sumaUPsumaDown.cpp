#include<iostream>
#include<cmath>
#include<fstream>
#include<iomanip>

float sumaUP(int);
float sumaDOWN(int);


float sumaUP(int n){
  float suma = 0;
  for(int i = 1; i<=n; i++){
    suma += 1.0/i;
  }
  return suma;
}

int main(){

  //std:: ofstream out ("datos.txt");
  
  for(int i= 1; i<=10000; i++){
    float sumaUp = sumaUP(i);
    float sumaDown = sumaDOWN(i);

    float diff1 = std::fabs(sumaUp-sumaDown)/sumaUp;
    float diff2 = std::fabs(sumaUp-sumaDown)/sumaDown;

    
    std::cout<<std::setprecision(7)<<std::scientific<<i<<"\t"<<diff1<<"\t"<<std::endl;
    //out<<std::setprecision(7)<<std::scientific<<i<<"  "<<diff1<<std::endl; 
  }
  //out.close();
  
}

float sumaDOWN(int n){
  float	suma = 0;
  for(int i = n; i>0; i--){
    suma += 1.0/i;
  }
  return suma;
}
