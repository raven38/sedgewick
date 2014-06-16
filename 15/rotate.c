struct node *rotate(int v, struct node *y){
  struct node *c, *gc;
  c = (v < y->key) ? y->l : y->r;
  if(v < c->key){
    gc = c->l; c->l = gc->r; gc->r = c;
  }else{
    gc = c->r; c->r = gc->l; gc->l = c;
  }
  if(v < y->key) y->l = gc; else y->r = ac;
  return gc;
}

