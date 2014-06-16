radixexchange(int a[], int l, int r, int b){
  int t, i, j;
  if(r > l && b >= 0){
    i = l; j = r;
    while(j != i){
      while(bits(a[i], b, 1) == 0 && i < j) i++;
      while(bits(a[j], b, 1) != 0 && j > i) j--;
      t = a[i]; a[i] = a[j]; a[j] = t;
    }
    if(bits(a[r], b, 1) == 0) j++;
    radixexchange(a, l, j-1, b-1);
    radixexchange(a, j, r, b-1);
  }
}
