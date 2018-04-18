//David Lopez Hernandez
//Ejercicio 3.9
//23-03-2018
#include <stdio.h>
int main(){
	int i , sumatotal=0,datoleer;
	float media;
	printf("Este programa calcula la media de 50 numeros\n");
	for(i=0;i<50;i++){
		printf("Introduce un numero\n");
		scanf("%d",&datoleer);
		sumatotal=sumatotal+datoleer;
	}
	media=sumatotal/50;
	printf("La media de los numeros es %.2f",media);
	return 0;
}
