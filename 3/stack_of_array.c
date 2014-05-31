#include <stdio.h>

#define max 100

static int stack[max+1], p;

void push(int v){ stack[p++] = v; }

int pop(){ return stack[--p]; }

void stackinit(){ p = 0; }

int stackempty(){ return !p; }

int main(){
  stackinit();
  return 0;
}
