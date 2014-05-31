traverse(struct node *t){
  if(t != z){
    traverse(t->l);
    visit(t);
    traverse(t->r);
  }
}
