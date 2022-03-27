#include<iostream>
#include<cmath>


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
  for(int i= 1; i<=100000; i++){
    float sumaUp = sumaUP(i);
    float sumaDown = sumaDOWN(i);

    float diff1 = std::fabs(sumaUp-sumaDown)/sumaUp;
    float diff2 = std::fabs(sumaUp-sumaDown)/sumaDown;

    std::cout<<diff1<<"  "<<diff2<<std::endl;
  }
}

float sumaDOWN(int n){
  float	suma = 0;
  for(int i = n; i>0; i--){
    suma += 1.0/i;
  }
  return suma;
}
