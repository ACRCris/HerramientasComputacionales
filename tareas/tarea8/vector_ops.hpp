#pragma once
#include <vector>
#include <numeric>

double mean(const std::vector<double> & data){
  if(data.empty()){ //verifica que el vector no se null
    int count = data.size();
    return std::reduce(data.begin(), data.end()) / count;
  }else{
    return 0;
  }
}
