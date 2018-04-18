//David Lopez Hernandez
//Ejercicio 2.9
//16-03-2018
#include <stdio.h>
int main(){
	float A,B,H,P;
	printf("Este programa calcula el Area y el perimetro de un rectangulo, dadas la base y la altura.\n");
	printf("Introduce la altura:\n");
	scanf("%f",&H);
	printf("Introduce la base:\n");
	scanf("%f",&B);
	A=B*H;
	P=2*B+2*H;
	printf("El area es: %.2f y el perimetro es: %.2f \n",A,P);
return 0;
}
