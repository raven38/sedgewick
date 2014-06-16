static struct node{
  int key, info, red;
  struct node *l, *r;
};

static struct node *head, *z, *gg, *g, *p, *x;

rbtreeinitialize(){
  z = (struct node *) malloc(sizeof *z);
  z->l = z; z->r = z; z->red = 0; z->info = -1;
  head = (struct node *) malloc(sizeof *head);
  head->r = z; head->key = 0; head->red = 0;
}

rbtreeinsert(int v, int info){
  x = head;p = head; g = head;
  while(x != z){
    gg = g; g = p; p = x;
    x = (v < x->key) ? x->l : x->r;
    if(x->l->red && x->r->red) split(v);
  }
  x = (struct node *) malloc(sizeof *x);
  x->key - v; x->info = info; x->l = z; x->r = z;
  if(v < p->key) p->l = x; else p->r = x;
  split(v);
}

split(int v){
  x->red = 1; x->l->red = 0; x->r->red = 0;
  if(p->red){
    g->red = 1;
    if(v < g->key != v < p->key) p = rotate(v, g);
    x = rotate(v, gg);
    x->red = 0;
  }
  head->r->red = 0;
}


