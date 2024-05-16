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
  char telefono[20];
  char email[30];

} persona;

int lastIndex = 0;

int main()
{
  fflush(stdin);
  char input[20];
  int output = 0;
  persona *personas = malloc(10 * sizeof(persona));
  while (1 != 0)
  {
    printMenu(output);
    scanf("%s", input);
    // Ingresar
    if (strcmp(input, "1") == 0)
    {
      addMenuOption(&personas, &output);
      continue;
    }
    // eliminar
    if (strcmp(input, "2") == 0)
    {
      continue;
    }
    // modificar
    if (strcmp(input, "3") == 0)
    {
      break;
    }
    // exit
    if (strcmp(input, ".exit") == 0)
    {
      printf("Invalid input.\n");
    }
  }
}

void addMenuOption(persona *personas, int *output)
{
  fflush(stdin);
  uiAddMenu();
  logicAddMenu(personas, output);
  printf("%s", *personas);
}

void logicAddMenu(persona *personas, int *output)
{
  uiAddMenu();
  char firstChar = getchar();
  if (firstChar == '-')
  {
    simpleAddPersonLogic(personas, output);
  }
  else
  {
    complexAddPersonLogic(personas, output, firstChar);
  }
}

void simpleAddPersonLogic(persona *personas, int *output)
{
  scanf(
      "%s,%s,%s,%s", personas[lastIndex].nombre, personas[lastIndex].apellido, personas[lastIndex].telefono, personas[lastIndex].email);
  lastIndex++;

  printPersons(personas);

  *output = 1;
}
void printPersons(persona *personas)
{
  for (int i = 0; i > 5; i++)
  {
    printf("%s", personas[i]);
  }
}
void complexAddPersonLogic(persona *personas, int *output, char firstChar)
{
  personas[lastIndex].nombre[0] = firstChar;

  scanf("%s", personas[lastIndex].nombre[1]);
  printf("|====================\n| PUT THE LAST NAME OF PERSON\n|====================\n");
  scanf("%s", personas[lastIndex].apellido);
  printf("|====================\n| PUT THE PHONE NUMBER OF PERSON\n|====================\n");
  scanf("%s", personas[lastIndex].telefono);
  printf("|====================\n| PUT THE EMAIL OF PERSON\n|====================\n");
  scanf("%s", personas[lastIndex].email);
  *output = 1;
}

void uiAddMenu()
{
  system("clear");
  printf("|====================\n| Ingresa el nombre de la persona\n|====================\n| colocar '-nombre,apellido,telefono,email', para ingresar una persona mas rapido\n|====================\n");
}

// 0 for normal, 1 for success, 2 for error, 3 for exit
void printMenu(int value)
{
  if (value == 0)
  {
    printf("|====================\n| Person Register\n|====================\n| 1. Registrar Persona\n|====================\n| 2. Registrar Persona\n|====================\n| 3. Registrar Persona\n|====================\n| Tipping '.exit' for exit the program\n|====================\n");
  }
  if (value == 1)
  {
    printf("|====================\n| Person Register\n|====================\n| 1. Registrar Persona\n|====================\n| 2. Registrar Persona\n|====================\n| 3. Registrar Persona\n|====================\n| Tipping '.exit' for exit the program\n|====================\n| TODO SALIO BIEN \n|====================\n");
  }
  if (value == 2)
  {
    printf("|====================\n| Person Register\n|====================\n| 1. Registrar Persona\n|====================\n| 2. Registrar Persona\n|====================\n| 3. Registrar Persona\n|====================\n| Tipping '.exit' for exit the program\n|====================\n| ALGO SALIO MAL... \n|====================\n");
  }
  if (value == 3)
  {
    printf("|====================\n| BYE BYE\n|====================\n");
  }
}