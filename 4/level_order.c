traverse(struct node *t){
  put(t);
  while(!queueempty()){
    t = get(); visit(t);
    if(t->l != z) put(t->l);
    if(t->r != z) put(t->r);
  }
}
