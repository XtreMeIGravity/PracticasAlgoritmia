//David Lopez Hernandez
//Ejercicio 3.10
//23-03-2018
#include <stdio.h>
int main(){
	int i,datoleer;
	float media;
	printf("Este programa calcula los multiplos de 4 entre 4 y n numeros , n se va introducir\n");
	printf("Introduce un numero\n");
	scanf("%d",&datoleer);
	for(i=0;i<=datoleer;i=i+4){
		printf("%d\n",i);
	}
	return 0;
}
