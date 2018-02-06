#include <stdio.h>
#include <assert.h>

long long check(int n, long long a, long long b)
{
    if (n == 0)
    {
      return a;
    }
    if (n == 1)
    {
      return b;
    }
    return check(n-1, b, a+b);
}

int main()
{
  int upto;
  printf("Enter an integer: ");
  scanf("%d", &upto);
  
  printf("Nth Fibonacci number is %lld\n", check(upto, 0, 1));
  return 0;
}
