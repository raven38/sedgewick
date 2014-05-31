rule(int l, int r, int h){
  int i, j, t;
  for(i = 1, j = 1; i <= h; i++, j+=j)
    for(t = 0; t <= (l+r)/j; t++)
      mark(l+j+t*(j+j), i);
}
