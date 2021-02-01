#include<stdio.h>
#include<stdlib.h>
//memory allocation

int main(){
	char *pletra;
	int longitud;
	printf ("\ncuantas letras: ");
	scanf("%d", &longitud);
	pletra=(char*)malloc(longitud);
	printf("\nescribe una palabra de menos de %d letras", longitud);
	scanf("%s",pletra);
	printf("\nAcabas de escribir la palabra %s", pletra);
	
	
	return 0;
}
