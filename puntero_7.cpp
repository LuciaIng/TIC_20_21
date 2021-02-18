#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char*lista[3];
	
	int cont;
	char aux[20];
	int devuelve_longitud(char *pletra){
	
		int longitud=0;
		int cont=0;
		while(*(pletra+cont)!='\0'){
			cont++;
	}
		}
		longitud=cont;
		return(longitud);
		
		
		}
	for(cont=0;cont<3;cont++){
		printf("\npalabra %d: ",cont);
		scanf("%s",aux);
		printf("\n longitud = %d", devuelve_longitud(*(lista+cont)));
		//lista[cont]=(char *) malloc(devuelve_longitud(lista+cont));
		//strcpy(lista[cont],aux);//(destino,origen)
		
		
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
