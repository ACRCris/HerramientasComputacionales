#include <cstdio>
#include <cstdlib>
#include <chrono>
#include <iostream>

/*
   Tests cache misses.
*/




void print_elapsed(auto start, auto end );

int main(int argc, char **argv)
{
  if (argc < 3){
    printf("Usage: cacheTest sizeI sizeJ\nIn first input.\n");
    return 1;
  }
  long sI = atoi(argv[1]);
  long sJ = atoi(argv[2]);

  
  
  printf("Operating on matrix of size %ld by %ld\n", sI, sJ);

  long *arr = new long[sI*sJ]; // double array.
  print_elapsed(start, end);
  
  // option 1
  opcion1(arr, sI, sJ);
  // option 2
  opcion2(arr, sI, sJ);
  // option 3
  opcion3(arr, sI, sJ);
  printf("%ld\n", arr[0]);
  
  return 0;
}

  
