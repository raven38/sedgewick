struct node *mergesort(struct node *c){
  int i, N;
  struct node *a, *b, *head, *todo, *t;
  head = (struct node *) malloc(sizeof *head);
  head->next = c; a = z;
  for(N = 1; a != head->next; N = N + N){
    todo = head->next; c = head;
    while(todo != z){
      t = todo; a = t;
      for(i = 1; i < N; i++) t = t->next;
      b = t->next; t->next = z; t = b;
      for(i = 1; i < N; i++) t = t->next;
      todo = t->next; t->next = z;
      c->next = merge(a, b);
      for(i = 1; i <= N+N; i++) c = c->next;
    }
  }
  return head->next;
}
