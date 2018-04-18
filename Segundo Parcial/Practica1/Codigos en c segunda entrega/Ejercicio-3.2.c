//David Lopez Hernandez
//Ejercicio 3.2
//23-03-2018
#include <stdio.h>
int main(){
	int NL,NA,NM;
	printf("Introduce cualquier numero entero el programa se detendra cuando introduscas -99 y te dara el numero mayor de la lista que introduciste\n");	
	do{
		printf("Introduce un numero\n");	
		scanf("%d", &NL);
		if(NL>NA){
			NM=NL;
		}
		NA=NL;
	}while(NL!=-99);
	printf("El numero mayor introducido es %d \n",NM);
	return 0;
}
