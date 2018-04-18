/*Practica 2.2*/
/*DAVID LOPEZ HERNANDEZ*/
#include <stdio.h>
#define SIZE 5
void main(void){
	int i, min ,imin;
    int conjunto[SIZE];
    printf("Introduce %d valores:\n",SIZE);
    
    for(i=0;i<SIZE;i++){
        printf("%d: ",i+1);
        scanf("%d",&conjunto[i]);
        printf("\n");
    }
    min=conjunto[0];
    imin=0;
    for(i=0;i<SIZE;i++){
        if(conjunto[i]<min){
            min=conjunto[i];
            imin=i;
        }
    }
    printf("El minimo valor del conjunto es: %d \n",min);
    printf("Y esta en la posicion: %d \n",imin+1);
}
