#include<iostream>
#include<cmath>
#include "Random64.h"
using namespace std;

int main(){
  Crandom ran2(1);
  double x; int i;
  double sigma=2,mu=3;  
  
  for(i=0;i<1e2;i++)
    cout<<ran2.r()<<" "<<ran2.gauss(mu,sigma)<<" "<<endl;

  return 0;
}
