/*Practica1.9*/
/*DAVID LOPEZ HERNANDEZ*/
#include <stdio.h>
int main(){
	int F;
	float C;
	printf("---------------\n");
	printf("|   F   |   C  |\n");
	F= 20;
	while( F <= 300){
		C=(5*(F-32))/9;
        printf("---------------\n");
		printf("|  %d  |  %.0f |\n",F,C);
		F=F+20;
	}
	printf("---------------\n");
	return 0;
}