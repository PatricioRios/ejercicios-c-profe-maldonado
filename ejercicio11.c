#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Escribir una calculadora simple que pueda sumar, restar, multiplicar,
dividir y encontrar el resto cuando un número se divide en otro. Use supropio criterio para el ingreso y salida de datos.
[q] La interfaz de entrada, debe permitir que la operación de ingreso se
realice de manera típica como por ejemplo: 5.6 * 27 o sino 3 + 6.

 */
void transform(char *transformed, int fecha);

int main()
{
  int dia, mes, years;
  char fecha[20];

  printf("Ingrese la fecha en el formato DD/MM/AAAA\n");
  scanf("%d/%d/%d", &dia, &mes, &years);
  transform(fecha, mes);
  printf("%d de %s de %d", dia, fecha, years);
}
