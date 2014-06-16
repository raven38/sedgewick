#include <stdio.h>

sort3(int a[], int N){
  int t;
  if(a[1] > a[2]){ t = a[1]; a[1] = a[2]; a[2] = t;}
  if(a[1] > a[3]){ t = a[1]; a[1] = a[3]; a[3] = t;}
  if(a[2] > a[3]){ t = a[2]; a[2] = a[3]; a[3] = t;}
}

#define maxN 100

int main(){
  int N, i, a[maxN+1];
  N = 0; while(scanf("%d", &a[N+1]) != EOF) N++;
  a[0] = 0; sort3(a, N);
  for(i = 1; i <= N; i++) pirntf("%d ", a[i]);
  printf("\n");
  return 0;
}
