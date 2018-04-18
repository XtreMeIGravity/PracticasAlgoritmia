#include <stdio.h>
int count(char arreglo[]){
	int contador=0;
	for (int i = 0; i < arreglo[i]; ++i){
		contador++;
	}
	return contador;
}
int compararlong(int leng1,int leng2){
	if (leng1==leng2){
		return 1;
	}else{
		return 0;
	}
}
int compararestricta(int leng1,int leng2,char cad1[],char cad2[]){
	int detenerse,c;
	if (leng1>=leng2){
		detenerse=leng1;
	}else{
		detenerse=leng2;
	}
	for (int i = 0; i < detenerse; ++i){
		if(cad1[i]==cad2[i]){
			c++;
		}else{
			printf("Difieren en el caracter %d :%c <-> %c \n",i,cad1[i],cad2[i] );
		}
	}
}
int comparar_cad(char cadena1[],char cadena2[]){
	int array1leng,array2leng;
	int leng;
	array1leng=count(cadena1);
	array2leng=count(cadena2);
	leng=compararlong(array1leng,array2leng);
	compararestricta(array1leng,array2leng,cadena1,cadena2);
	if (leng){
		printf("La longitud es igual\n");
		return 1;
	}else{
		printf("La longitud es distinta\n");
		return 0;
	}
	
}
int main(){
	/* code */
	int com;
	char cadena1[250];
	char cadena2[250];
	printf("Introduce un cadena paps\n");
	gets(cadena1);
	printf("Introduce un cadena paps\n");
	gets(cadena2);
	com=comparar_cad(cadena1,cadena2);
	if (com){
		printf("Las cadenas son iguales\n");
	}else{
		printf("Las cadenas son diferentes\n");
	}
	return 0;
}