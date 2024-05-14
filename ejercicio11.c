#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Escribir una calculadora simple que pueda sumar, restar, multiplicar,
dividir y encontrar el resto cuando un número se divide en otro. Use supropio criterio para el ingreso y salida de datos.
[q] La interfaz de entrada, debe permitir que la operación de ingreso se
realice de manera típica como por ejemplo: 5.6 * 27 o sino 3 + 6.

 */
void calculate(double *A, double B, int operation);
void mux(char *aux, int *i, double *B, double *A, int *operacion);
void determinOperation(int *operation, char operationChar);

int main()
{
  double result;
  char aux[20];
  int i = 0;
  double A = 0, B = 0;
  int operacion = 0;
  int aorb;
  printf("Bienvenido a la calculadora ( no ingrese espacios porfavor),\n * = multiplicar\n / = dividir\n + = suma \n - = resta \n m = modulo \n");
  while ((aux[i] = (char)getchar()) != '\n')
  {
    if (aux[i] == '+' || aux[i] == '-' || aux[i] == '*' || aux[i] == '/' || aux[i] == 'm')
    {
      mux(aux, &i, &B, &A, &operacion);
      continue;
    }
    i++;
  }

  aux[i] = '\0';
  B = atof(aux);
  calculate(&A, B, operacion);

  printf("Resultado : %f", A);

  return 0;
}

/*
input:
  aux: The array of chars contains the numbers and a operation example "10+", "10*"
  i: the i while acumulator.
  B: the B number of the operation.
  A: the A number of the operation.
  operation: is the int with contains the last operation collected.
*/
void mux(char *aux, int *i, double *B, double *A, int *operacion)
{
  determinOperation(operacion, aux[*i]);

  if (*A == 0.0)
  {
    aux[*i] = '\0';
    *A = atof(aux);
    *i = 0;
  }
  else
  {
    aux[*i] = '\0';
    *B = atof(aux);
    calculate(A, *B, *operacion);
    *i = 0;
  }
}

/*
This fuctions determin the operation.
Input:
  operation: the integer conteiner of the operation.
  operationChar: the char container the operation in char.
*/
void determinOperation(int *operation, char operationChar)
{
  if (operation == '+')
  {
    *operation = 0;
  }
  else if (operation == '-')
  {
    *operation = 1;
  }
  else if (operation == '*')
  {
    *operation = 2;
  }
  else if (operation == '/')
  {
    *operation = 3;
  }
  else if (operation == 'm')
  {
    *operation = 4;
  }
}
/*
This function calculate the operation with A and B inputs, with the 'int operation' operation.
*/
void calculate(double *A, double B, int operation)
{
  switch (operation)
  {
  case 0:
    *A += B;
    break;
  case 1:
    *A -= B;
    break;
  case 2:
    *A = (B) * (*A);
    break;
  case 3:
    *A /= B;
    break;
  case 4:
    *A = (double)((int)*A % (int)B);
    break;
  }
}