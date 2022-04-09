#include <random>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <fstream>

void compute_pdf(int seed, int nsamples, double mu, double sigma, double xmin, double xmax, int nbins);

int main(int argc, char **argv)
{
  const int SEED = std::atoi(argv[1]);
  const int NSAMPLES = std::atoi(argv[2]);
  const double MU = std::atof(argv[3]);
  const double SIGMA = std::atof(argv[4]);
  const double XMIN = std::atof(argv[5]);
  const double XMAX = std::atof(argv[6]);
  const int NBINS = std::atoi(argv[7]);

  compute_pdf(SEED, NSAMPLES,MU,SIGMA ,XMIN, XMAX, NBINS);
}

void compute_pdf(int seed, int nsamples, double mu, double sigma, double xmin, double xmax, int nbins)
{
  // random stuff
  std::mt19937 gen(seed);
  std::normal_distribution<double> dis{mu, sigma};
  // TODO: histogram stuff
  double delX = xmax - xmin;    
  
  double tamBin = delX/nbins;
  
  for(int n = 0; n < nsamples; ++n) {
    double r = dis(gen);
    for(int i = 0; i<nbins; ++i){
        if(fabs((xmin+i*tamBin)-r) <= tamBin ){
            std::cout<<i<<" "<<r<<" "<<xmin+i*tamBin<<" "<<fabs((xmin+i*tamBin)-r)<<std::endl;
            
            break;
        }
    }
    // TODO: fill here the counting histogram
  }
  // TODO: compute and print the pdf

}s
