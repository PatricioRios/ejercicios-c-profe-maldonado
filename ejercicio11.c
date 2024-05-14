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
// void determin(char *aux, double *A, double *B, int *i, int *operacion);

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
      /*
      if (aux[i] == '+')
      {
        if (A == 0.0)
        {
          aux[i] = '\0';
          A = atof(aux);
          // printf("numeros =  A = %f B = %f, operacion = %d\n", A, B, operacion);
          operacion = 0;
          i = 0;
          continue;
        }
        else
        {
          aux[i] = '\0';
          B = atof(aux);
          calculate(&A, B, operacion);
          // printf("EXTRACT B = %f\n", B);
          // printf("numeros =  A = %f B = %f, operacion = %d\n", A, B, operacion);
          operacion = 0;
          i = 0;
          continue;
        }
      }
      if (aux[i] == '-')
      {
        if (A == 0.0)
        {
          aux[i] = '\0';
          A = atof(aux);
          // printf("numeros =  A = %f B = %f, operacion = %d\n", A, B, operacion);
          operacion = 1;
          i = 0;
          continue;
        }
        else
        {
          aux[i] = '\0';
          B = atof(aux);
          calculate(&A, B, operacion);
          // printf("EXTRACT B = %f\n", B);
          // printf("numeros =  A = %f B = %f, operacion = %d\n", A, B, operacion);
          operacion = 1;
          i = 0;
          continue;
        }
      }
      if (aux[i] == '*')
      {
        // printf("entro a multiplicacion");
        if (A == 0.0)
        {
          aux[i] = '\0';
          A = atof(aux);
          // printf("numeros =  A = %f B = %f, operacion = %d\n", A, B, operacion);
          operacion = 2;
          i = 0;
          continue;
        }
        else
        {
          aux[i] = '\0';
          B = atof(aux);
          calculate(&A, B, operacion);
          // printf("EXTRACT B = %f\n", B);
          // printf("numeros =  A = %f B = %f, operacion = %d\n", A, B, operacion);
          operacion = 2;
          i = 0;
          continue;
        }
      }
      if (aux[i] == '/')
      {
        if (A == 0.0)
        {
          aux[i] = '\0';
          A = atof(aux);
          // printf("numeros =  A = %f B = %f, operacion = %d\n", A, B, operacion);
          operacion = 3;
          i = 0;
          continue;
        }
        else
        {
          aux[i] = '\0';
          B = atof(aux);
          calculate(&A, B, operacion);
          // printf("EXTRACT B = %f\n", B);
          // printf("numeros =  A = %f B = %f, operacion = %d\n", A, B, operacion);
          operacion = 3;
          i = 0;
          continue;
        }
      }
      if (aux[i] == 'm')
      {
        if (A == 0.0)
        {
          aux[i] = '\0';
          A = atof(aux);
          // printf("numeros =  A = %f B = %f, operacion = %d\n", A, B, operacion);
          operacion = 4;
          i = 0;
          continue;
        }
        else
        {
          aux[i] = '\0';
          B = atof(aux);
          calculate(&A, B, operacion);
          // printf("EXTRACT B = %f\n", B);
          // printf("numeros =  A = %f B = %f, operacion = %d\n", A, B, operacion);
          operacion = 4;
          i = 0;
          continue;
        }
      }
      */
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

void mux(char *aux, int *i, double *B, double *A, int *operacion)
{
  printf("1: aux=%s,i=%d,B=%d,A=%d,operacion=%d\n", aux, *i, *B, *A, *operacion);
  determin(operacion, aux[*i]);

  if (*A == 0.0)
  {
    aux[*i] = '\0';
    *A = atof(aux);
    printf("numeros =  A = %f B = %f, operacion = %d\n", *A, *B, *operacion);
    *i = 0;
  }
  else
  {
    aux[*i] = '\0';
    *B = atof(aux);
    calculate(A, *B, *operacion);
    printf("EXTRACT B = %f\n", *B);
    printf("numeros =  A = %f B = %f, operacion = %d\n", *A, *B, *operacion);
    *i = 0;
  }
  printf("2: aux=%s,i=%d,B=%d,A=%d,operacion=%d\n", aux, *i, *B, *A, *operacion);
}

void determin(int *operation, char operationChar)
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
void determin(char *aux, double *A, double *B, int *i, int *operacion)
{
  if (aux[*i] == '+')
  {
    if (*A == 0.0)
    {
      aux[*i] = '\0';
      *A = atof(aux);
      printf("numeros =  A = %f B = %f, operacion = %d\n", A, B, *operacion);
      *operacion = 0;
      *i = 0;
      return;
    }
    else
    {
      aux[*i] = '\0';
      *B = atof(aux);
      calculate(A, *B, *operacion);
      printf("EXTRACT B = %f\n", B);
      printf("numeros =  A = %f B = %f, operacion = %d\n", *A, *B, operacion);
      *operacion = 0;
      *i = 0;
      return;
    }
  }

  *i++;
}
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