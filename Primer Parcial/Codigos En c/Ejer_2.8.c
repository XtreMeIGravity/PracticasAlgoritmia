//David Lopez Hernandez
//Ejercicio 2.8
//16-03-2018
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416;
int main(){
	float r,S;
	printf("Este programa calcula el area de un circulo dado el radio.\n");
	printf("Ingresa el valor del radio \n");
	scanf("%f",&r);
	S=(r*r)*PI;
	printf("El area es %.2f \n",S);
return 0;
}
