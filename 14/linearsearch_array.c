static struct node{
  int key, info;
};

static struct node a[maxN+1];
static int N;

seqinitialize(){
  N = 0;
}

int seqsearch(int v){
  int x = N+1;
  a[0].key = v; a[0].info = -1;
  while(v != a[--x].key);
  return a[x].info;
}

seqinsert(int v, int info){
  a[++N].key = v;
  a[N].info = info;
}
