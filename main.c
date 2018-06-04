/*Lopez Hernandez David
1CV1 No lista
04/06/18*/
#include <stdio.h>
#include <stdlib.h>

typedef struct racional{
	int numerador;
	int denominador;
}fraccion;

void LeerFraccion(fraccion *pf);

fraccion *SumarFracciones(fraccion f1, fraccion f2);

void main(){
	fraccion fr1,fr2,*fr3;
	LeerFraccion(&fr1);
	LeerFraccion(&fr2);
	fr3=SumarFracciones(fr1,fr2);
	printf("\n\n %d/%d + %d/%d=%d/%d\n",fr1.numerador,fr1.denominador,fr2.numerador,fr2.denominador,fr3->numerador,fr3->denominador);
	free(fr3);
}

//Definicion de la funcion para leer una fraccion
void LeerFraccion(fraccion *pf){
	printf("Numerador:\n");
	scanf("%d",&pf->numerador);

	printf("Denominador:\n");
	scanf("%d",&pf->denominador);
}

//Definicion de la funcion para sumar dos fracciones
fraccion *SumarFracciones(fraccion f1, fraccion f2){
	fraccion *pf;
	pf=(fraccion *)malloc(sizeof(fraccion));
	if (pf==NULL){
		printf("Memoria insuficiente\n");
	    exit(-1); 
	}
	pf->numerador=(f1.numerador*f2.denominador)+(f1.denominador*f2.numerador);
	pf->denominador=(f1.denominador*f2.denominador);
	return(pf);
}
