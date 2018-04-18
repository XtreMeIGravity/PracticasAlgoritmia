//David Lopez Hernandez
//Ejercicio 3.3
//23-03-2018
#include <stdio.h>
int main(){
	int suma,prod,i,h;
	printf("Calcular y visualizar la suma y el producto de los números pares comprendidos entre 20 y 400 Ambos inclusive\n");	
	for(i=20;i<=200;i++){
		for(h=20;h<=200;h++){
			suma=i+h;	
			prod=i*h;
			printf("La suma de %d + %d = %d \n",i,h,suma);
			printf("El producto de %d * %d = %d\n\n",i,h,prod);
		}
	}
	return 0;
}
