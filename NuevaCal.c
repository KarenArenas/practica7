/* Arenas Mimbrera Karen Mariel
ejercicio 4 Calculadora con funciones 
Practica 7 27/09/24*/

#include <stdio.h>
#include <math.h>

int resp;

int suma(int a, int b) {
  resp = a + b;
  return resp;
}

int resta(int a, int b) {
  resp = a - b;
  return resp;
}

int multiplicacion(int a, int b) {
  resp = a * b;
  return resp;
}

int division(int a, int b) {
  if (b == 0) {
    printf("Error: Division por cero no permitida.\n");
    return 0;  // Devolver 0 en caso de división por cero.
  }
  resp = a / b;
  return resp;
}

int expon(int a, int b) {
  resp = (int)pow(a, b);  // Convertir el resultado de pow a int.
  return resp;
}

int main() {
  int a = 0, b = 0;
  int respuesta;
  int opcion;

  printf("Dime que opcion deseas realizar: \n");
  printf("1.- Suma\n");
  printf("2.- Resta\n");
  printf("3.- Multiplicacion\n");
  printf("4.- Division\n");
  printf("5.- Exponente\n");
  scanf("%d", &opcion);

  // Pedir los números para las operaciones.
  printf("Ingresa dos números: ");
  scanf("%d %d", &a, &b);

  switch (opcion) {
    default:
      printf("Opcion no valida.\n");
      respuesta = 0;
      break;
    case 1:
      respuesta = suma(a, b);
      break;
    case 2:
      respuesta = resta(a, b);
      break;
    case 3:
      respuesta = multiplicacion(a, b);
      break;
    case 4:
      respuesta = division(a, b);
      break;
    case 5:
      respuesta = expon(a, b);
      break;
  }

  printf("El resultado de la operacion es: %d\n", respuesta);
  return 0;
}
