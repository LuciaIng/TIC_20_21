/*
Números aleatorios
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int cont;
		int resultados[6];
	int puntuacion;
	srand(time(0));
	for(cont=1;cont<=6000;cont++){
		puntuacion=rand()%6+1;
		resultados[puntuacion-1]=resultados[puntuacion-1]+1;
	}
	//Muetro los resultaods
	for(cont=0;cont<6;cont++){
		prinf("resultados[%d]=%d\n",cont,resultados[cont]);
	}
	printf("%d",puntuacion);
	retun0;
	
	
	
}
