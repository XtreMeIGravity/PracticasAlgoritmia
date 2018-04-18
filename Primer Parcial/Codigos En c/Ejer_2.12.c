//David Lopez Hernandez
//Ejercicio 2.12
//16-03-2018
#include <stdio.h>
int main(){
	float F,C;
	printf("Este programa convierte grados celsius a Fahrenheit\n");
	printf("Introduce la temperatura en grados celsius \n");
	scanf("%f",&C);
	F=(1.8*C)+32;
	printf("La temperatura en grados Fahrenheit es %f \n",F); 
return 0;
}
