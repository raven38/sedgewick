#include <stdio.h>
#include <stdlib.h>

struct node {
  char info;
  struct node *l, *r;
};

struct node *x, *z;
char c;

/*void stackinit(){
  x = (struct node *) malloc(sizeof *head);
  z = (struct node *) malloc(sizeof *z);
  head->next = z; head->key = 0;
  z->next = z;
  }*/

void push(int v){
  x = (struct node *) malloc(sizeof *x);
  x->key = v; x->next = head->next;
  head->next = x;
}

int pop(){
  int y;
  x = head->next; head->next = x->next;
  y = x->key;
  free(t);
  return y;
}

int stackempty(){
  return head->next == z;
}

int main(){
  z = (struct node *) malloc(sizeof *z);
  z->l = z; z->r = z;
  for(stackinit(); scanf("%1s", &c) != EOF;){
    x = (struct node *) malloc(sizeof *x);
    x->info = c; x->l = z; x->r = z;
    if(c == '+' || c == '*'){
      x->r = pop();
      x->l = pop();
    }
    push(x);
  }
  return 0;
}
