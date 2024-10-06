#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int n) {
  int i, j, temp;
  for (i = 0; i < n-1; i++) {
    for (j = 0; j < n-i-1; j++) {
      if (arr[j] > arr[j+1]) {
        // Swap arr[j] and arr[j+1]
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

void printArray(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int n, max_value;
  
  printf("Ingrese la cantidad de elementos del arreglo: ");
  scanf("%d", &n);
  printf("Ingrese el valor máximo para los números aleatorios: ");
  scanf("%d", &max_value);

  int arr[n];
  srand(time(0)); // Inicializa la semilla para los números aleatorios

  for (int i = 0; i < n; i++) {
    arr[i] = rand() % (max_value + 1); // Genera números aleatorios entre 0 y max_value
  }

  printf("Arreglo sin ordenar: \n");
  printArray(arr, n);
  bubbleSort(arr, n);
  printf("Arreglo ordenado: \n");
  printArray(arr, n);

  return 0;
}