#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(0));

  int n;
  int num_aleratorio;

  for (int i = 0; i < 5; i++){
    num_aleratorio = rand();
    printf("%d\n", num_aleratorio);
  }
  

  return 0;
}