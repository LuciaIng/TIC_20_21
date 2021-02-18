#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char*lista[3];
	int cont;
	char aux[20];
	int longitud;
	for(cont=0;cont<3;cont++){
		printf("\npalabra %d: ",cont);
		scanf("%s",aux);
		longitud=strlen(aux);
		lista[cont]=(char *) malloc(longitud);
		strcpy(lista[cont],aux);//(destino,origen)
		
		
	}		
	//MOSTRAR LISTA
	printf("\n**********************************");
	printf("\n*   FABULOSA LISTA DE PALABRAS ");
	printf("\n**********************************");
	for(cont=0;cont<3;cont++){
	printf("\n %d .- %s",*(lista+cont));
	}
	return 0;
	
}
