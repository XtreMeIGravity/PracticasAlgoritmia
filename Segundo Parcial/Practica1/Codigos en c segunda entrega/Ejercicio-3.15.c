//David Lopez Hernandez
//Ejercicio 3.15
//23-03-2018

#include<stdio.h>
int main (){
    int numeros, n, suma, x;
    suma=0;
    printf("Cuantos numeros desea que contenga el archivo? ");
    scanf("%d",&numeros);
    for (x=1; x<=numeros; x++){
        printf("Escribe un numero ");
        scanf("%d",&n);
        if (n>0){
                printf("Es un numero positivo\n");
                suma=suma+n;
        }else{
            printf("Es un numero negativo\n");
        }
    }
    printf("La suma de los numeros positivos es: %d\n",suma);
	return 0;
}
