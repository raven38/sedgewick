#include <stdio.h>

struct fraction{
  int numerator;
  int denominator;
};

int gcd(int u, int v){ return v?gcd(v, u % v):v;}

int main(){
  struct fraction f;
  while(scanf("%d%d", &f.numerator, &f.denominator)){
    int g = gcd(f.numerator, f.denominator);
    f.numerator /= g;
    f.denominator /= g;
    printf("%d / %d\n", f.numerator, f.denominator);
  }
  return 0;
}
