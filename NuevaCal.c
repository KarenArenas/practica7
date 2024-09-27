/* Arenas Mimbrera Karen Mariel
ejercicio 4 Calculadora con funciones 
Practica 7 27/09/24*/

#include <stdio.h>
#include <math.h>

int resp;

int suma(int a, int b)
{
  resp=a+b;
  return(resp);
}
int resta(int a, int b)
{
  resp=a-b;
  return(resp);
}
int multiplicacion(int a, int b)
{
  resp=a*b;
  return(resp);
}
int division(int a, int b)
{
  resp=a/b;
  return(resp);
}
int expon(int a, int b)
{
  resp=pow(a,b);
  return(resp);
}

int main()
{
  int a=0, b=0;
  int respuesta;

  printff("Dime que opcion deseas realizar: \n");
  printf("1.- Suma\n");
  printf("2.- Resta\n");
  printf("3.- Multiplicacion\n");
  printf("4.- Division\n");
  printf("5.- Exponente\n");
  scanf("%d", &opcion);

  switch(opcion)
    {
      default:
        respuesta=0;
      break;
      case 1:
      respuesta=Suma(a,b)
      break;
      case 2:
      respuesta=Resta(a,b)
      break;
      case 3:
      respuesta=Multiplicacion(a,b)
      break;
      case 4:
      respuesta=Division(a,b)
      break;
      case 5:
      respuesta=Exponente(a,b)
      break;
    }

    printf("El resultado de la operacion es: %d\n", respuesta);
    return 0;
}
