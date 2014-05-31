#include <stdio.h>

#define max 100

static int queue[max+1], head, tail;

void put(int v){
  queue[tail++] = v;
  if(tail > max) tail = 0;
}

int get(){
  int t = queue[head++];
  if(head > max) head = 0;
  return t;
}

void queueinit(){
  head = 0;
  tail = 0;
}

int queueempty(){
  return head == tail;
}

int main(){
  queueinit();
  return 0;
}
