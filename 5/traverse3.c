rec_traverse(struct node *t){
  if(t != z){
    visit(t);
    traverse(t->l);
    traverse(t->r);
  }
}

not_rec_traverse(struct node *t){
 l: if(t == z) goto x;
  visit(t);
  traverse(t->l);
  t = t->r;
  goto l;
 x: ;
}
