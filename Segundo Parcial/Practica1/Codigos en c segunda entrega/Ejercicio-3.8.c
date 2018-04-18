//David Lopez Hernandez
//Ejercicio 3.8
//23-03-2018
#include <stdio.h>
int main(){
	int i , sumatotal=0,datoleer;
	for(i=0;i<10;i++){
		printf("Introduce un numero\n");
		scanf("%d",&datoleer);
		sumatotal=sumatotal+datoleer;
	}
	printf("La suma de los numeros es %d",sumatotal);
	return 0;
}
