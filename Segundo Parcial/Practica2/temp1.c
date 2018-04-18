/*Practica2*/
/*DAVID LOPEZ HERNANDEZ*/
#include <stdio.h>
int main(){
	int F;
	float C;
	printf("---------------\n");
	printf("|  F   |   C  |\n");
	for (F= 20; F <= 300; F=F+20){
		C=(5*(F-32))/9;
		printf("---------------\n");
		printf("|  %d  |  %.1f |\n",F,C);
	}
	printf("---------------\n");
	return 0;
}