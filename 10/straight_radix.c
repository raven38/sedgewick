#define M 100

straightradix(int a[], int b[], int N){
  int i, j, pass, count[M-1];
  for(pass = 0; pass < (w/m)-1; pass++){
    for(j = 0; j < M; j++) count[j] = 0;
    for(i = 1; i <= N; i++)
      count[bits(a[i], pass*m, m)]++;
    for(j = 1; j < M; j++)
      count[j] = count[j-1]+count[j];
    for(i = N; i >= 1; i--)
      b[count[bits(a[i], pass*m, m)]--] - a[i];
    for(i = 1; i <= N; i++) a[i] = b[i];
  }
}
