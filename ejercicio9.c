#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Escriba un programa que primero permitirá al operador elegir una de
las dos opciones:
• Convertir una velocidad de [m/s] a [Km/h]
• Convertir una velocidad de [Km/h] a [m/s]
El programa debe solicitar el ingreso del valor de velocidad y mostrar el
nuevo valor que resulta de la conversión según el criterio elegido por el
programador.

[q] Defina una interfaz de ingreso para que el dato de velocidad ingresa-
da vaya acompañada por las unidades en formato [m/s] o [km/s] y a partir
de ese ingreso el programa tome la decisión de conversión de manera au-
tomática.
*/

// TODO: Hacer las validaciones de entrada de datos.

int main()
{
  float velocidad;
  char formato[4];
  printf("Ingresar por teclado la velocidad que quiere calcular\n(kms o ms ejemplo: 100kms o 100ms)\n");
  scanf("%f%s", &velocidad, formato);

  printf("velocidad: %f formato: %s", velocidad, formato);

  if (formato[0] == 'k' && formato[1] == 'm' && formato[2] == 's')
  {
    printf("kms -> ms : %f", velocidad / 1000);
  }
  else if (formato[0] == 'm' && formato[1] == 's')
  {
    printf("ms -> kms : %f", velocidad * (float)1000);
  }
}