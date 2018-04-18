/*Practica2.1*/
/*DAVID LOPEZ HERNANDEZ*/
#include <stdio.h>
void main(void){
	int i=1 , suma =0;
	/*Primera forma*/
	for (;i<=5;){
		suma+=i;
		i++;
	}
	printf("suma 1 = %d \n",suma );
	/*Segunda forma*/
	suma=0;
	for (i = 1; i <= 5; ++i)
		suma+=i;
	printf("suma 2 =%d\n",suma);
	/*Tercera forma */
	for (i=1,suma=0; i<= 5;i++,suma+=i)
		printf("%d | %d\n",i,suma );
		;
	printf("suma 3 =%d\n",suma);

	/*Cuarta forma */
	for (i=1,suma=0; i<= 5;suma+=i,i++)
		;
	printf("suma 4 =%d\n",suma);

}
