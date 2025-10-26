// selection sort function module in C

void display(int *a,int n){
    int i;

    for(i=0; i<n; i++){
        cout<<setw(5)<<a[i];
    }
    cout<<endl;
  
}

void selection_sort(int *a, int n) 
{ 
	int i, j;
  int max, mi;
    
  //1 round first
  for(j = 0; j < n-1; j++){
    max = a[j];
    mi = j;
    
    for(i = j+1; i < n; i++){
      if(a[i] > max){
        max = a[i];
        mi = i;
      }
    }
    swap(a[j],a[mi]);
    display(a,n);
  }
  //display(a,n);
} 

void insertion_sort(int *a, int n){
  int i, j, value;
  for(i = 1; i < n; i++){
    value = a[i];
    for (j = i - 1; j >= 0 && a[j] < value; j--){
      a[j + 1] = a[j];
      display(a,n);
    }
    a[j + 1] = value;
    display(a,n);
    
  }
  //display(a,n);
}


void swap(int &a, int &b){
  int temp;
  temp = a;
  a = b;
  b = temp;
  
}

void bubble_sort(int *a, int n){
  int i,j;
  int sorted;
 
  for(i = 0; i < n-1; i++){
    sorted = 1;
    for(j = 0; j < n-1-i; j++){
      if(a[j] < a[j+1]){
        swap(a[j], a[j+1]);
        sorted = 0;
      }
      display(a,n);
    }
    if(sorted == 1){
      break;
    }
  }
  //display(a,n);
}

int partition_desc(int *a, int low, int high, int n){
  int pivot = a[high];    // choose last element as pivot
  int i = low - 1;

  for(int j = low; j < high; ++j){
    // For DESC: keep larger elements on the left
    if(a[j] >= pivot){
      ++i;
      if(i != j){
        int t = a[i]; a[i] = a[j]; a[j] = t;
        display(a, n);      
      }
    }
  }
  if(i + 1 != high){
    int t = a[i + 1]; a[i + 1] = a[high]; a[high] = t;
    display(a, n);
  }
  return i + 1;
}

void quick_sort_rec(int *a, int low, int high, int n){
  if(low < high){
      int p = partition_desc(a, low, high, n);
      quick_sort_rec(a, low, p - 1, n);
      quick_sort_rec(a, p + 1, high, n);
  }
}

void quick_sort(int *a, int n){
  if(n <= 1) return;
  quick_sort_rec(a, 0, n - 1, n);
  //display(a,n);
}




