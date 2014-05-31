void visit(struct node *t){
  t->x = ++x; t->y = y;
}

void traverse(struct node *t){
  y++;
  if(t != z){
    traverse(t->l);
    visit(t);
    traverse(t->r);
  }
  y--;
}
