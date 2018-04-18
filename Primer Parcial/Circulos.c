/*Ejercicio programacion 1*/
/*05/03/2018*/
#include<stdio.h>
#define pi 3.14
int r;
double at,lt;
int main(){
	printf("Este programa calcula la longitd y el area total de tres circunferencias sabiendo que 		la primera de ellas tien un radio de R , la 2 tiene 2R y la 3 tiene 3R\n");
	printf("Introduce r\n");
	scanf("%d",&r);
	//Circulo
	at=pi*6*r*r;
	lt=pi*(12*r);
	printf("La longitud total es: %f\n El area total es: %f \n",lt,at);
	return 0;
}
