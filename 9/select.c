select(int a[], int l, int r, int k){
  int i;
  if(r > l){
    i = parition(l, r);
    if(i > l+k-1) select(a, l, i-1, k);
    if(i < l+k-1) select(a, i+1, r, k-1);
  }
}
