#include <stdio.h>
int main()
{
  char op= '\0';
  printf("Menu\n");
  printf("Elegir la opcion deseada\n");
  printf(" a) Ingresar\n");
  printf(" b) Registrarse\n");
  printf(" c) Salir\n");
  scanf("%c",&op);
  switch(op)
  {
    default:
        printf("opcion no valida.\n");
        break;
    case 'a':
        printf("Se selecciono Ingresar.\n");
        break;
    case 'b':
        printf("Se selecciono Registrarse.\n");
        break;
    case 'c':
        printf("Se selecciono Salir.\n");
        break;
  }
  return 0;
}


    
  
