//David Lopez Hernandez
//Ejercicio 2.6
//16-03-2018
#include <stdio.h>
int main (){
	float b,h,P,S;
	printf("Este programa calcula el area de un rectangulo\n");
	printf("Ingresa el valor de la base \n");
	scanf("%f",&b);
	printf("Ingresa el valor de la altura \n");
	scanf("%f",&h);
	P=(b+h)*2;
	S=(b*h);
	printf("La superficie es %.2f \n",S);
	printf("El perímetro es %.2f ",P);
return 0;
}
