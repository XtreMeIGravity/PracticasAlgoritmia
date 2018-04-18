//David Lopez Hernandez
//Ejercicio 2.10
//16-03-2018
#include <stdio.h>
int main(){
	char Marca[15],Modelo[15];
	printf("Este programa lee e imprime marca y modelo de un vehiculo.\n");
	printf("Introduce la marca del automovil:\n");
	scanf("%s",&Marca);
	printf("Introduce el modelo del automovil:\n");
	scanf("%s",&Modelo);
	printf("%s %s \n",Modelo,Marca);
return 0;
}
