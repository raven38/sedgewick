quicksort(int a[], int l, int r){
  int v, i, j, t;
  if(r > l){
    v = a[r]; i = l - 1; j = r;
    for(;;){
      while(a[++i] < v);
      while(a[--j] > v);
      if(i >= j) break;
      t = a[i]; a[i] = a[j]; a[j] = t;
    }
    t = a[i]; a[i] = a[r]; a[r] = t;
    quicksort(a, l, i-1);
    quicksort(a, i+1, r);
  }
}
