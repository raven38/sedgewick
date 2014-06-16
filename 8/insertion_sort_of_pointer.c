insertion(int a[], int *p[], int N){
  int i, j, *v;
  for(i = 0; i <= N; i++) p[i] = &a[i];
  for(i = 2; i <= N; i++){
    v = p[i]; j = i;
    while(*p[j-1] > *v){ p[j] = p[j-1]; j--;}
    p[j] = v;
  }
}
