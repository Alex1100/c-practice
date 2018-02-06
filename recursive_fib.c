#include <stdio.h>

int check(int upto)
{
  if (upto <= 2){
    return 1;
  }
  int z = (upto - 1);
  int x = (upto - 2);
  
  return check(z) + check(x);
}

int main()
{
  int upto = 0;
  printf("Enter an integer:\n");
  scanf("%d", &upto);
  if(upto <= 0)
  {
    printf("Nth Fibonacci number is 0\n");
    return 0;
  }
  
  printf("Nth Fibonacci number is %d\n", check(upto));
  return 0;
}