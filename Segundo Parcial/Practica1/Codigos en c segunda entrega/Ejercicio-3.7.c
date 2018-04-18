//David Lopez Hernandez
//Ejercicio 3.7
//23-03-2018
#include <stdio.h>
int main(){
	int i , sumaPares;
	for(i=2;i<=100;i=i+2){
		sumaPares=sumaPares+i;
	}
	printf("La suma de los numeros pares es %d",sumaPares);
	return 0;
}
