insitu(int a[], int p[], int N){
  int i, j, k, t;
  for(i = 1; i <= N; i++)
    if(p[i] != i){
      t = a[i]; k = i;
      do{
	j = k; a[j] = a[p[i]];
	k = p[j]; p[j] = j;
      }
      while(k != i);
      a[j] = t;
    }
}
