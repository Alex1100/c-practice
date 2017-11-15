#include <stdio.h>

int power(int m, int n);

int main(void){
  int i;

  for(i = 1; i <= 10; ++i){
    printf("\n%d Raised to the power of 2 is equal to %d\n", i, power(2, i));
  }

  return 0;
}

int power(int base, int n){
  int i, p;

  p = 1;
  for(i = 1; i <= n; ++i){
    p = p * base;
  }
  return p;
}
