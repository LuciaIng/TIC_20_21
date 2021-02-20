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

void turno(int cont,int* marcador, char tecla,char* resultado){
    printf("\nTURNO %d. ORDENADOR. Presiona cualquier tecla ",cont+1);
	scanf("%c",&tecla);
	marcador[cont]=tirada();
	printf(resultado);
	printf(" %d",marcador[cont]);
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
		turno(cont,marcador1,tecla,"Ordenador ha sacado: ");
		//turno jugador
		turno(cont,marcador2,tecla,"Jugador ha sacado: ");
		//Ganador de la ronda
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
