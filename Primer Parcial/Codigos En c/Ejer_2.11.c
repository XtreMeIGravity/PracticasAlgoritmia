//David Lopez Hernandez
//Ejercicio 2.11
//16-03-2018
#include <stdio.h>
#include <math.h>
int main(){
	float cat2,cat1,hip;
	printf("Este programa calcula la hipotenusa de un triangulo rectangulo dados los catetos\n");
	printf("Introduce el cateto 1\n");
	scanf("%f",&cat1);
	printf("Introduce el cateto 2\n");
	scanf("%f",&cat2);
	hip = sqrt(pow(cat1,2)+pow(cat2,2));
	printf("La hipotenusa es %.2f \n",hip);
return 0;
}
