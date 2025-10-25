#include <iostream>
#include <cstring>
#include <iomanip>
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
 return 0;
}


