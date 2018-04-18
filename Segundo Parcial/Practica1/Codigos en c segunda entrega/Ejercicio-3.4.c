//David Lopez Hernandez
//Ejercicio 3.4
//23-03-2018
#include <stdio.h>
int main(){
	int cont,NL,h;
	printf("Leer 500 números enteros y obtener cuantos son positivos.\n");	
	for(h=1;h<=500;h++){
		scanf("%d", &NL);
		if(NL>0){
			cont++;
		}
	}
	printf("Introduciste %d numeros positivos",cont);
	return 0;
}
