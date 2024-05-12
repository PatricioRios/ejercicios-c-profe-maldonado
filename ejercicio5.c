#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
Escriba un programa que lea cinco valores de tipo Double desde el te-
clado y guárdelos en un arreglo. Luego calcule el recíproco de cada valor

(el recíproco del valor x es 1/x) y guárdelo en otro arreglo. Muestre por
pantalla los valores recíprocos y la suma de los recíprocos.
*/

int main()
{
  double *doubles = malloc(5 * sizeof(double));
  doubles[0] = 1.1;
  doubles[1] = 1.2;
  doubles[2] = 1.3;
  doubles[3] = 1.4;
  doubles[4] = 1.5;
  double *reciprocos = malloc(5 * sizeof(double));
  double sumatoria = 0.0;

  printf("%d", (int)(sizeof(*doubles) / sizeof(double)));

  for (int i = 0; i < 5; i++)
  {
    reciprocos[i] = 1 / doubles[i];
    printf("Reciproco %f = 1/%f, value = %f \n", doubles[i], doubles[i], reciprocos[i]);
    sumatoria = sumatoria + reciprocos[i];
  }

  printf("Sumatoria de los reciprocos: %f", sumatoria);

  return 0;
}