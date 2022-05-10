#include <iostream>
#include <chrono>
#include <cmath>
#include <Eigen/Dense>

double multiply(int size);

int main(int argc, char ** argv)
{
  std::vector<double> times;

  const int size = atoi(argv[1]); // Matrix size
  const int timesSeed = atoi(argv[2]); // number of samples

  double sum =0;
  double sum2 = 0;
  
  for(int i=0; i<timesSeed; i++){

    srand(i); // control the seed
    double time = multiply(size);
    sum += time;
    sum2 += time*time;
  
  }
  
  double meanTime = sum / timesSeed;//mean time
  double sigma = std::sqrt(timesSeed*(sum2/timesSeed - meanTime*meanTime)/(timesSeed-1)); //standart deviation

  std::cout.setf(std::ios::scientific);
  std::cout.precision(15);
  std::cout<<size*size<<"\t"<<meanTime<<"\t"<<sigma<<std::endl;

  
  
}

double multiply(int size)
{
  // create matrices
  Eigen::MatrixXd A = Eigen::MatrixXd::Random(size, size);
  Eigen::MatrixXd B = Eigen::MatrixXd::Random(size, size);

  auto start = std::chrono::steady_clock::now();
  auto C{A*B}; // MULTIPLY
  double tmp = C(0, 0); // use the matrix to make eigen compute it
  auto end = std::chrono::steady_clock::now();

  std::clog << tmp << std::endl; // use the matrix to make eigen compute it

  std::chrono::duration<double> elapsed_seconds = end-start;
  return elapsed_seconds.count();
}
