#include <stdio.h>
#include <string.h>
//#define X = 1000

int main(){
	int i = 0;
	int contador;
	char cadena [1000];
	char resultado[1000];
	printf ("Introduzca la cadena: \n");
	scanf("%s",cadena);
	while(i<1001){
		if(cadena[i] == '_')
			resultado[i]='.';
		if(cadena[i] == 'X' && i < 1000){
			if(cadena[i+1] == 'X' || cadena[i+1] == '_'){
				resultado[i] = '.';
				resultado[i+1] = 'L';
				resultado[i+2] = '.';
				i += 2;
			}    
		}
		if(cadena[i] != 'X' && cadena[i] != '_'){
			resultado[i] = '\0';
		}
		i += 1;
	}
	printf("La cadena es: %s \n", resultado);
	return 0;
}
