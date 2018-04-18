//David Lopez Hernandez
//Ejercicio 3.14
//23-03-2018
#include<stdio.h>
int main (){
  	int numero, pares=0, cont=1, x;
 	while (cont<=10){
    printf("Introduzca un numero\n");
    scanf("%d",&numero);
        if (numero%2==0){
            cont++;
            printf("Es un numero par : %d\n",numero);
            pares=pares+numero;   
        }else{
        	printf("Es un numero impar\n");
    	}
	}
    printf( "La suma de los pares es: %d\n",pares);
	return 0;
}
