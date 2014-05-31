#include <stdio.h>

#define max 100

int key[max+2], next [max+2];
int x, head, z;

void listinitialize(){
  head = 0; z = 1; x = 2;
  next[head] = z; next[z] = z;
}

deletenext(int t){
  next[t] = next[next[t]];
}

int insertafter(int v, int t){
  key[x] = v; next[x] = next[t];
  next[t] = x;
  return x++;
}

int main(){
  listinitalize();
  return 0;
}
