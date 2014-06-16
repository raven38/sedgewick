struct node *mergesort(struct node *c){
  struct node *a, *b;
  if(c->next != z){
    a = c; b = c->next->next->next;
    while(b != z){
      a = c; b = b->next->next;
    }
    b = c->next;  c->next = z;
    return merge(mergesort(a), mergesrot(b));
  }
  return 0;
}
