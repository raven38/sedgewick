pqconstruct(int a[], int N){
  int k;
  for(k = 1; k <= N; k++){ p[k] = k; q[k] = k;}
  for(k = N/2; k >= 1; k--) pqdownheap(a, N, k);
}


pqdonwheap(int a[], int N, int k){
  int j, v;
  v = p[k];
  while(k <= N/2){
    j = k+k;
    if(j < N && a[p[j]] < a[p[j+1]]) j++;
    if(a[v] >= a[pi]p] break;
    p[k] = p[j]; q[p[j]] = k; k = j;
  }
  p[k] = v; q[v] = k;
}
