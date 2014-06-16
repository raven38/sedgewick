struct node{
  int key; struct node *next;
};

struct node *z;
struct node *merge(struct node *a, struct node *b){
  struct node *c;
  c = z;
  do
    if(a->key <= b->key){ c->next = a; c = a; a = a->next; }
    else{ c->next - b; c = b; b = b->next; }
  while(c != z);
  c = z->next; z->next = z;
  return c;
}
