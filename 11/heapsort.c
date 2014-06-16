heapsort(int a[], int N){
  int k;
  construct(a, 0);
  for(k = 1; k <= N; k++) insert(a[k]);
  for(k = N; k >= 1; k--) a[k] = remove();
}

heapsort(int a[], int N){
  int k, t;
  for(k = N/2; k >= 1; k--) downheap(a, N, k);
  while(N > 1){
    t = a[1]; a[1] = a[N]; a[N] = t;
    downheap(a, --N, 1);
  }
}

