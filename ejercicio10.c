#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Escriba un programa que solicite al usuario que ingrese la fecha co-
mo tres valores enteros para el dia, el mes y año deparado por un carác-
ter slash. Transforme este formato fecha ingresada en “dia de mes del
año” por ejemplo “31 de diciembre de 2003” si el usuario ingresa a
31/12/2003.

[q] Cambie el programa para que al valor del día se muestre con el forma-
to de orden como 1er, 2do, 3o, 4to...
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

void transform(char *transformed, int fecha)
{
  switch (fecha)
  {
  case 1:
    strcpy(transformed, "Enero");
    break;
  case 2:
    strcpy(transformed, "Febrero");
    break;
  case 3:
    strcpy(transformed, "Marzo");
    break;
  case 4:
    strcpy(transformed, "Abril");
    break;
  case 5:
    strcpy(transformed, "Mayo");
    break;
  case 6:
    strcpy(transformed, "Junio");
    break;
  case 7:
    strcpy(transformed, "Julio");
    break;
  case 8:
    strcpy(transformed, "Agosto");
    break;
  case 9:
    strcpy(transformed, "Septiembre");
    break;
  case 10:
    strcpy(transformed, "Octubre");
    break;
  case 11:
    strcpy(transformed, "Noviembre");
    break;
  case 12:
    strcpy(transformed, "Diciembre");
    break;
  default:
    strcpy(transformed, "Mes invalido"); // Handle invalid month
    break;
  }
}