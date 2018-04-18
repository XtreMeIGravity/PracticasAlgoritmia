#include <stdio.h>

int main(){
	int contletra=0,contnumeros=0,contesp=0,i;
	char cadena[255];
	printf("Introduce un cadena paps\n");
	gets(cadena);
	for(i = 0; i<cadena[i]; ++i){
		if (cadena[i]>=65 && cadena[i]<=90 || cadena[i]>=97 && cadena[i]<=122){
			contletra++;
		}else if(cadena[i]>=48 && cadena[i]<=57){
			contnumeros++;
		}else{
			contesp++;
		}		
	}
	printf("El numero de letras es: %d \n",contletra );
	printf("El numero de enteros es: %d \n",contnumeros );
	printf("El numero de caracteres especiales es: %d \n",contesp );
	return 0;
}