#include <stdio.h>

int main() {
  char respuesta = 'N';
  int numero = 0;
  int suma = 0;

  do {
    printf("Introduce un numero: ");
    scanf_s("%d", &numero);
    suma = suma + numero;

    printf("Quieres sumar? (S/N): ");
    scanf_s(" %c", &respuesta);
  } while (respuesta == 'S' || respuesta == 's');

  printf("La suma es: %d\n", suma);

  return 0;
}