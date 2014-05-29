// Problem 1 ユークリッドの平家物語

#include <stdio.h>

int gcd(int x, int y){ return y?gcd(y, %y):x;}

int main(){
  int x, y;
  while(scanf("%d%d", &x, &y) && x && y){
    if(y > x){ y += x; x = y - x; y -= x;}
    printf("%d %d %d\n", x, y, gcd(x, y));
  }
  return 0;
}
