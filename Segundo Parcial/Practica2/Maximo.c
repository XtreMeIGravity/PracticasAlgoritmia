/*Practica 2.1*/
/*DAVID LOPEZ HERNANDEZ*/
#include <stdio.h>
#define SIZE 5
void main(void){
	int i, max ,imax;
    int conjunto[SIZE];
    printf("Introduce %d valores:\n",SIZE);
    
    for(i=0;i<SIZE;i++){
        printf("%d: ",i+1);
        scanf("%d",&conjunto[i]);
        printf("\n");
    }
    max=conjunto[0];
    imax=0;
    for(i=0;i<SIZE;i++){
        if(conjunto[i]>max){
            max=conjunto[i];
            imax=i;
        }
    }
    printf("El maximo valor del conjunto es: %d \n",max);
    printf("Y esta en la posicion: %d \n",imax+1);
}
