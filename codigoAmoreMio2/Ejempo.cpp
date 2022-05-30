#include <iostream>
#include <cmath>
#include "Random64.h"
#include <vector>
using namespace std;


std::vector<int> beans(double valor, double wBean,int nBeans, std::vector<int> aBeans);

int main(int argc, char ** argv){

  int nBeans = atoi(argv[1]);
  
  Crandom ran2(1);
  double x; int i;
  double sigma=2,mu=3;  

  double wBean =  (sigma*10)/nBeans;

  std::vector<int> aBeans;

  for(int i=0; i<nBeans; i++) aBeans.push_back(0);
  
  for(i=0;i<1e4;i++){
    //cout<<ran2.gauss(mu,sigma)<<" "<<ran2.r()<<endl;
    aBeans = beans(ran2.gauss(mu,sigma), wBean, nBeans, aBeans);
  }
  for(int i=0; i<nBeans; i++){
    //cout<<wBean*(i)-7<<", "<<wBean*(i+1)-7<<" ";
    cout<<((wBean)*(i))-7 + wBean/2.0<<" "<<aBeans[i]<<endl;
  }
  return 0;
}

std::vector<int> beans(double valor, double wBean,int nBeans, std::vector<int> aBeans){
  for(int i =0; i<nBeans; i++){
    if(valor>= (wBean*i-7) && valor <= (wBean*(i+1)-7)){
      //cout<< wBean*i<<", "<<wBean*(i+1)<<endl;
      aBeans[i]++;
    }
  }
  return aBeans;
}
