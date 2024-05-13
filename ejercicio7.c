#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Escriba un programa que lea cinco valores desde el teclado y los guar-
de en un arreglo. Luego determine cual es el mayor, cual es el menor y
ordenelos de manera ascendente.
[q] Lea el vector y guarde sus valores en una matriz, tal que almacene su
parte entera en la primera columna y la parte decimal en la segunda co-
lumna.
*/

#include <stdio.h>

int main()
{
  float *valores = malloc(5 * sizeof(float)); // Arreglo para almacenar 5 valores flotantes
  float mayor, menor;                         // Variables para almacenar el mayor y menor valor
  int i, j;                                   // Contadores para bucles

  printf("Ingrese 5 valores numericos: \n");
  for (i = 0; i < 5; i++)
  {
    scanf("%f", &valores[i]);
  }

  mayor = valores[0];
  menor = valores[0];
  for (i = 1; i < 5; i++)
  {
    if (valores[i] > mayor)
    {
      mayor = valores[i];
    }
    else if (valores[i] < menor)
    {
      menor = valores[i];
    }
  }

  for (i = 0; i < 4; i++)
  {
    for (j = i + 1; j < 5; j++)
    {
      if (valores[i] > valores[j])
      {
        float temp = valores[i];
        valores[i] = valores[j];
        valores[j] = temp;
      }
    }
  }

  printf("\nEl mayor valor ingresado es: %.2f", mayor);
  printf("\nEl menor valor ingresado es: %.2f", menor);
  printf("\nValores ordenados de menor a mayor: \n");
  for (i = 0; i < 5; i++)
  {
    printf("%.2f ", valores[i]);
  }

  return 0;
}
