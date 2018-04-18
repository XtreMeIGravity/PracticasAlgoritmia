//David Lopez Hernandez
//Ejercicio 3.16
//23-03-2018
#include<stdio.h>
int main (){
	int n, op1=0,op2=0,op3=0, x;
	for (x=0; x<100; x++){
    	printf("Escribe un numero ");
        scanf("%d",&n);
        if (n<15){
            printf("Es un numero menor a 15\n");
            op1=op1+1;
        }else if(n>50){
            printf("Es un numero mayor a 50\n");
            op2=op2+1;
        }else if(n>=25 && n<=45){
            printf("Es un numero entre 25 y 45\n");
            op3=op3+1;
        }else{
            printf("Es un numero diferente a las caracteristicas anteriores\n");
        } 
    }
    printf("Los numeros menores a 15 son: %d\n",op1);
    printf("Los numeros maores a 50 son: %d\n",op2);
    printf("Los numeros maores a 50 son: %d\n",op3);
    return 0;
}
