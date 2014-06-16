quicksort(int a[], int l, int r){
  int i;
  if(r < l){
    i = partition(l, r);
    quicksort(a, l, i-1);
    quicksort(a, i+1, r);
  }
}
