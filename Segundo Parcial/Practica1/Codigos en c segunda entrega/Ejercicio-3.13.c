//David Lopez Hernandez
//Ejercicio 3.13
//23-03-2018
#include<stdio.h>
int main (){
    int n, c, calft, x, num;
    float media,numt=0;
    printf("Dame el numero total de alumnos en la clase");
    scanf ("%d",&n);
    printf("Dame el numero total de calificaciones por alumno");
    scanf ("%d",&c);
    calft=(n*c);
    printf("Las calificaciones totales de los numeros en clase son: %d\n",calft);
	for (x=1; x<=calft; x++){
    	printf ("Dame una calificacion");
    	scanf ("%d",&num);
    	numt=numt+num;
    }
	media=numt/calft;
	printf ("La media es: %f\n",media);
	return 0;
 }
