#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  double *arreglo = malloc(100 * sizeof(double));
  double lastNumber = 2;

  for (int i = 0; i <= 100; i++)
  {
    double multiplicacion = lastNumber * (lastNumber + 1) * (lastNumber + 2);
    arreglo[i] = 1 / multiplicacion;
    printf("1/(%f * %f * %f) = %10f \n", lastNumber, (lastNumber + 1), (lastNumber + 2), arreglo[i]);
    lastNumber = lastNumber + 2;
  }
  return 0;
}