#include <stdio.h>
int main(){
	int contador;
	char cadena[12]={'H','e','l','l','o',' ','w','o','r','l','d','!'};
	for (int i = 0; i < cadena[i]; ++i){
		contador++;
	}
	for (int i = contador; i >= 0; --i){
		printf("%c",cadena[i] );
	}
	return 0;
}