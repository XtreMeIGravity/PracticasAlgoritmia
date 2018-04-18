//David Lopez Hernandez
//Ejercicio 3.6
//23-03-2018
#include <stdio.h>
int main(){
	int i , sumaCuadrados;
	for(i=0;i<=100;i++){
		sumaCuadrados=sumaCuadrados+(i*i);
	}
	printf("La suma de los cuadrados es %d",sumaCuadrados);
	return 0;
}
