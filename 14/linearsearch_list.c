static struct node{
  int key, info;
  struct node *next;
};

static struct node *head, *z;

listinitialize(){
  head = (struct node *) malloc(sizeof *head);
  z = (struct node *) malloc(sizeof *z);
  head->next = z; z->next = z; z->info = -1;
}

int listseach(int v){
  struct node *t = head;
  z->key = v;
  while(v > t->key) t = t->next;
  if(v != t->key) return z->info;
  return t->info;
}

listinsert(int v, int info){
  struct node *xx, *t = head;
  z->key = v;
  while(v > t->next->key) t = t->next;
  x = (struct node *) malloc(sizeof *x);
  x->next - t->next; t->next = x;
  x->key = v; x->info = info;

