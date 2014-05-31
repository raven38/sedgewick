/* 局所変数が一つだけなのでスタックにプッシュして先頭にgotoでトンで行ける。
 *   再帰はなくなるけどもgotoが多くて、分かりにくい。
 */
traverse(struct node *t){
 l: if(t == z) goto s;
  visit(t);
  push(t); t = t->l; goto l;
 r: t = t->r; goto l;
 s: if(stackempty()) goto x;
  t = pop(); goto r;
 s: ;
}


// ループを使う
traverse(struct node *t){
 l: while(t != z){
    visit(t);
    push(t->r); t = t->l;
  }
  if(stackempty()) goto x;
  t = pop(); goto l;
 x: ;
}

traverse(struct node *t){
  push(t);
  while(!stackempty()){
    t = pop();
    while(t != z){
      visit(t);
      putsh(t->r);
      t = t->l;
    }
  }
}

// 標準的なもの
traverse(struct node *t){
  push(t);
  while(!stackempty()){
    t = pop();
    if(t != z){
      visit(t);
      push(t->r);
      push(t->l);
    }
  }
}

// last
traverse(struct node *t){
  push(t);
  while(!stackempty()){
    t = pop(); visit(t);
    if(t->r != z) push(t->r);
    if(t->l != z) push(t->l);
  }
}
