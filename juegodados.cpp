/*
Haz un juego en el que compites con el ordenador. Reglas:
1. Se tira el dado(nºaleatrorio) 3 veces de forma consecutiva
> TURNO1. ORDENADOR (presiona cualquier tecla para tirar el dado)
>4
>TURNO 1. PLAYER H (presiona cualquier tecla para tirar el dado)
>3
>Gana el ordenador ;)
>TURNO 2.
Al final se dan todos los resutlados parciales, la suma de los puntos y se proclama 
al ganador.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int tirada(){
	int puntuacion;
	srand(time(0));
	puntuacion=rand()%6+1;
	return(puntuacion);
}
void escribe_ganador(int puntuacion_1,int puntuacion_2){
	if(puntuacion_1>puntuacion_2)
		printf("\n ORDENADOR WIN");
	else 
		if(puntuacion_1< puntuacion_2)
			printf("\n JUGADOR WIN");
		else
			printf("\nJUGADOR Y ORDENADOR EMPATAN");
}

int main(){
	int cont;
	int marcador1[3];
	int marcador2[3];
	char tecla;
	int total1=0;
	int total2=0;
	for(cont=0;cont<=3;cont++){
		//turno ordenador
		printf("\nTURNO %d. ORDENADOR. Presiona cualquier tecla ",cont+1);
		scanf("%c",&tecla);
		marcador1[cont]=tirada();
		printf("%d",marcador1[cont]);
		//turno jugador
		printf("\nTURNO %d. ORDENADOR. Presiona cualquier tecla ",cont+1);
		scanf("%c",&tecla);
		marcador2[cont]=tirada();
		printf("%d",marcador2[cont]);
		escribe_ganador(marcador1[cont],marcador2[cont]);
	
	}
	//RESULTADOS
		printf("\n**************************************");
		printf("\n*****        PUNTUACIONES     ********");
		printf("\n**************************************");
		printf("\n*         JUGADOR         ORDENADOR  *");
		
		 
		for(cont=0;cont<=3;cont++){
		printf("\n* TURNO %d    %d              %d      *", cont+1,marcador1[cont],marcador2[cont]);
		total1=total1+marcador1[cont];
		total2=total1+marcador2[cont];
		}
		printf("\n**************************************");
		printf("\n* TOTAL       %d              %d      *", total1, total2);
		escribe_ganador(total1,total2);
	return 0;
}
mejoras
marcador [2] [3] matriz
sacar fuera del cuerpo todos los procesos y funciones que quiras
en vez de turno ordenador turno(1) sustiuyendo a las lineas de la 48//turno ordenador
