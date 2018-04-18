//David Lopez Hernandez
//Ejercicio 3.1
//23-03-2018
#include <stdio.h>
int main(){
	int AP,AE,i;
	for(i=0;i<=200;i++){
		if(i%2==0){
			AP=AP+i;
		}else{
			AE=AE+i;			
		}
	}
	printf("La suma de numeros pares es: %d \n",AP);
	printf("La suma de numeros impares es: %d \n",AE);
	
	return 0;
}
