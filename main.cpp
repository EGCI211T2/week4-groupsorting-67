#include <iostream>
#include <cstring>
#include <iomanip>
#include <chrono>
using namespace std;

#include "sorting.h"

int main(int argc, char * argv[]) {
  auto start = chrono::high_resolution_clock::now();

  // ---- Your code here ----
  for (int i = 0; i < 100000000; i++); // Example workload
  // ------------------------

  auto end = chrono::high_resolution_clock::now();

  // Calculate duration in milliseconds
  auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);

  
  int i, n;
  n = argc - 2;
  int *a;
  a = new int[n];
  for(i = 0; i < n; i++){
      a[i] = atoi(argv[i + 2]);
  }
  
  if(strcmp(argv[1],"bubble") == 0){
    bubble_sort(a,n);
  }
  else if(strcmp(argv[1],"insertion") == 0){
    insertion_sort(a,n);
  }
  else if(strcmp(argv[1],"selection") == 0){
    selection_sort(a,n);
  }
  else;

  delete []a;

  // Display runtime
  cout << "Runtime: " << duration.count() << " ms" << endl;
  return 0;
}


