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
} 

void insertion_sort(int *a, int n){
  int i, j, value;
  for(i = 1; i < n; i++){
    value = a[i];
    for (j = i - 1; j >= 0 && a[j] < n; j--){
      a[j + 1] = a[j];
      display(a,n);
    }
    a[j + 1] = value;
    display(a,n);
    
  }
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
    for(j = i; j < n-1-i; j++){
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
}




