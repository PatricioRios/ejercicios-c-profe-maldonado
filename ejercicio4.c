#include <stdio.h>
#include <stdlib.h>

int main()
{
  int min, max;

  // Get valid range from the user
  printf("Ingrese el número minimo (debe ser menor que el máximo): ");
  scanf("%d", &min);
  printf("Ingrese el número maximo: ");
  scanf("%d", &max);

  // Validate that min is less than max
  if (min >= max)
  {
    printf("Error: El minimo debe ser menor que el maximo.\n");
    return 1;
  }

  // Seed the random number generator (optional for better randomness)
  srand(time(NULL));

  char str[21];
  for (int i = 0; i < 20; i++)
  {
    // Generate a random number within the range
    int random_num = rand() % (max - min + 1) + min;
    // Convert the number to a character (0-9 + 'A'-'Z')
    str[i] = (char)(random_num < 10 ? '0' + random_num : 'A' + random_num - 10);
  }

  // Ensure null termination of the string
  str[20] = '\0';

  printf("Cadena de numeros de 20 dígitos:\n");
  printf("%s\n", str);

  return 0;
}
