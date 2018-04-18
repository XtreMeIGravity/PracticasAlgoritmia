//David Lopez Hernandez
//Ejercicio 3.5
//23-03-2018
#include <stdio.h>
int main(){
	float PU,PN,CANT,PBRUT;
	printf("Introduce el precio unitario de lo que se esta vendiendo.\n");
	scanf("%f",&PU);
	printf("Introduce la cantidad de lo que se esta vendiendo.\n");
	scanf("%f",&CANT);
	PBRUT=CANT*PU;
	if(PBRUT>50000){
		PBRUT=PBRUT*.95;
	}
	PN=PBRUT*1.12;
	printf("EL total a apgar es de : %.2f \n",PN);
	return 0;
}
