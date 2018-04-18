//David Lopez Hernandez
//Ejercicio 2.13
//16-03-2018
#include <stdio.h>
#include <math.h>
int main(){
	float P,Area,A,B,C;
	printf("Este programa se encarga de calcular el area de un triangulo en funcion de las longitudes de sus lados.\n");
	printf("Introduce los 3 lados separado por ',' \n");
	scanf("%f,%f,%f",&A,&B,&C);
	P=(A+B+C)/2;
	Area=sqrt(P*(P-A)*(P-B)*(P-C));
	printf("El area del triangulo es: %f",Area); 
	return 0;
}
