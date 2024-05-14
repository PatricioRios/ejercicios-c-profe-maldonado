#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Defina una estructura que contenga el nombre de una persona [nom-
bre y apellido], el número de teléfono y dirección de e-mail. Realice un

programa que permitirá ingresar en un arreglo de 8 personas. Para el in-
greso en el vector, utilice un menú con la opción que solo ingrese una úni-
ca persona y otra opción que le permita mostrar por pantalla la tabla que
va ingresando.
[q] Luego ordene el arreglo por alguno de los campos (el que Ud. elija)
para mostrar el resultado obtenido por pantalla -no utilizar string.h -.
*/

typedef struct
{
  char nombre[20];
  char apellido[20];
  int telefono;
  char email[30];

} Persona;

int main()
{
  Persona *personas = malloc(10 * sizeof(Persona));

  whi
}