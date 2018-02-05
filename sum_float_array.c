#include <stdio.h>

int main()
{
  int  number;
  int size = 5;
  int i;
  float sum = 0.0;
  float vet[size];
  int numberofdecimals = 2;

  printf("Enter 5 floats: ");
  for (i = 0; i < size; i++) {
    scanf("%f", &vet[i]);
    sum = sum + vet[i];
  }
  
  printf("\nTotal = %.*f\nAverage = %.*f\nPercentage = %.*f %%\n", numberofdecimals, sum, numberofdecimals, (sum/(sizeof(vet)/sizeof(int))), numberofdecimals, (sum/((sizeof(vet)/sizeof(int)) * 100)) * 100);
  return 0;
}
