//David Lopez Hernandez
//Ejercicio 3.12
//23-03-2018
#include <stdio.h>
int main(){
	int i,contador=0,contador2=0,STP,STI,DatoLec;
	float mediaImpares;
	printf("Este programa Dados 10 números enteros visualizar la suma de los números pares de la lista cuantos números pares existen y cual es la media aritmética de los números impares.\n");
	for(i=0;i<10;i++){
		printf("Introduce un numero\n");
		scanf("%d",&DatoLec);
		if(DatoLec%2 == 0){
			STP=STP+DatoLec;
			contador2++;
		}
		if(DatoLec%2 != 0){
			STI=STI+DatoLec;
			contador++;
		}
	}
	mediaImpares=STI/contador;
	printf("La cantidad es %d y la suma total es %d media de impares es %f \n",contador,STI,mediaImpares);
	printf("La cantidad de pares es %d y la suma de estos es %d\n",contador2,STP);
	return 0;
}
