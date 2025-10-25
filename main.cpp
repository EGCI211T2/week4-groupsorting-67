#include <iostream>
#include <cstring>
#include <iomanip>
#include <chrono>
using namespace std;

#include "sorting.h"

int main(int argc, char * argv[]) {
  
  int i, n;
  n = argc - 2;
  int *a;
  a = new int[n];
  for(i = 0; i < n; i++){
      a[i] = atoi(argv[i + 2]);
  }

auto start = chrono::high_resolution_clock::now();
  
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

  auto end = chrono::high_resolution_clock::now();
  
  // Calculate duration in milliseconds
  auto ms = chrono::duration_cast<chrono::milliseconds>(end - start);
  // Calculate duration in microseconds
  auto us = chrono::duration_cast<chrono::microseconds>(end - start);

  delete []a;

  // Display runtime
  cout << "Runtime: " << ms.count() << " ms" << endl;
  cout << "Runtime: " << us.count() << " μs" << endl;
  return 0;
}


