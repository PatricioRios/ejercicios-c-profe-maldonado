#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
  int numero;
  while (0 == 0)
  {
    printf("Ingresar un numero para retornar un caracter ascii \n");
    scanf("%d", &numero);
    if (numero > 127 || numero < 0)
    {
      printf("el numero debe estar entre 0-127 \n");
      continue;
    }
    printf("el caracter es: %c \n", numero);
  }

  return 0;
}