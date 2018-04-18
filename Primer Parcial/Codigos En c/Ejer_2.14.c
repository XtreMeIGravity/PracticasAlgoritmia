//David Lopez Hernandez
//Ejercicio 2.14
//16-03-2018
#include <stdio.h>
int main(){
	float M,P,Area;
	printf("Este programa convierte metros a pulgadas.\n");
	printf("Introduce los metros que deseas convertir \n");
	scanf("%f",&M);
	P=M*39.37;
	printf("La conversion de %.2f metros es %.2f pulgadas",M,P); 
	return 0;
}
