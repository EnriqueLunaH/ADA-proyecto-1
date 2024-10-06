#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // inicializa la semilla para los números aleatorios
  srand(time(0));

  // genera un número aleatorio
  int random_number = rand();

  // imprime el número aleatorio
  printf("Número aleatorio: %d\n", random_number);

  return 0;
}