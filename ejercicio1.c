#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
  int numero;

  do
  {
    printf("Ingarese el numero de el cual quiere generar la tabla de multiplicar ( menor a 15) \n ");
    scanf("%d", &numero);
    if (numero > 15)
    {
      printf("El numero debe ser >= a 15");
    }
  } while (numero > 15);

  for (int i = 0; i <= 10; i++)
  {
    printf("%d * %d = %d \n", i, numero, numero * i);
  }
  return 0;
}