#include <stdio.h>

traverse(struct node *t){
  push(t);
  while(!stackempty()){
    t = pop(); visit(t);
    if(t->r != z) push(t->r);
    if(t->l != z) push(t->l);
  }
}
