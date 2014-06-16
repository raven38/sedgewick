upheap(int k){
  int v;
  v = a[k]; a[0] = INT_MAX;
  while(a[k/2] <= v){
    a[k] = a[k/2];
    k = k/2;
  }
  a[k] = v;
}

insert(int v){
  a[++N] = v;
  upheap(N);
}

downheap(int k){
  int j, v;
  v = a[k];
  while(k <= N/2){
    j = k+k;
    if(j < N && a[j] < a[j+1]) j++;
    if(v >= a[j]) break;
    a[k] = a[j]; k = j;
  }
  a[k] = v;
}

int remove(){
  int v = a[o];
  a[l] = a[N--];
  downheap(1);
  return v;
}

int replace(int v){
  a[0] = v;
  downheap(0);
  return a[0];
}
