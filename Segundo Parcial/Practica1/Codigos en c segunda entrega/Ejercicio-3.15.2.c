//David Lopez Hernandez
//Ejercicio 3.15.2
//23-03-2018

#include<stdio.h> 
#include<stdlib.h> 
#include <conio.h> 
#define MAX_ARGS 90
#define MAX_CADENA 100

int extrae_argumentos(char *orig, char *delim, char args[][MAX_CADENA], int max_args)
{
  char *tmp;
  int num=0;
  /* Reservamos memoria para copiar la candena ... pero la memoria justa */
  char *str = malloc(strlen(orig)+1);
  strcpy(str, orig);

  /* Extraemos la primera palabra */
  tmp=strtok(str, delim);
  do
    {
      if (num==max_args)
    return max_args+1;  /* Si hemos extraído más cadenas que palabras devolvemos */
                /* El número de palabras máximo y salimos */

      strcpy(args[num], tmp);   /* Copiamos la palabra actual en el array */
      num++;

      /* Extraemos la siguiente palabra */
      tmp=strtok(NULL, delim);
    } while (tmp!=NULL);

  return num; 
}

main(){ 
	char cadena[150]; 
    FILE *archivo; 
    archivo = fopen("archivo.txt","r"); 
    if (archivo == NULL){ 
            exit(1); 
    }
    while (feof(archivo) == 0){
 		fgets(cadena,100,archivo);
	}
    fclose(archivo);
    
    
    char args[MAX_ARGS][MAX_CADENA]; // Para extrae_argumentos
	//  char *args2[MAX_ARGS];                  // Para extrae_argumentos_d
  	int nargs = extrae_argumentos(cadena, ",", args, MAX_ARGS);
  	int i,z,val;
  	if (nargs>MAX_ARGS){
    	printf ("\nSe han devuelto más palabras del máximo\n");
      	nargs=MAX_ARGS;
    }
  	printf("CADENA: %s\n", cadena);
	for (i=0; i<nargs; i++){	
    	printf("Palabra %d: %s\n", i, args[i]);
	}
	printf("%d \n",sizeof(args));
	for(z=0;z<sizeof(args);z++){
		val = atoi(args[z]);
	}
    
    
    
    return 0;
} 
