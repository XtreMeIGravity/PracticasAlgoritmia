//David Lopez Hernandez
//Ejercicio 2.5
//16-03-2018
#include <stdio.h>
#include <stdlib.h>
#define PII 3.1416;
int main(){
	float r,h,Al,Ab,At,V;
	printf("Este programa determina el area y el volumen de un clindro\n");
	printf("Ingresa el valor del radio \n");
	scanf("%f",&r);
	printf("Ingresa el valor de la altura \n");
	scanf("%f",&h);
	Al=(2*(r*h))*PII;
	Ab=(r*r)*PII;
	At=(2*(Ab+Al));
	V=((r*r)*h)*PII;
	printf("El area es %.2f",At);
	printf("\nEl volumen es %.2f",V);
return 0;	
}
