static int a[maxN + 1], N;

construct(int b[], int M){
  for(N = 1; N <= M; N++) a[N] = b[N];
}

insert(int v){
  a[++N] = v;
}

int remove(){
  int j, max, v;
  max = 1;
  for(j = 2; j <= N; j++)
    if(a[j] > a[max]) max = j;
  v = a[max];
  a[max] = a[N--];
  return v;
}
