/*
Lee dos matrices 3x3 y devuelve la suma
*/

#include<stdio.h>

int main(){
	int matriz_1[3][3];
	int matriz_2[3][3];
	int fil,col;
	// Leo la matriz 1
	for(fil=0;fil<3;fil++){
		for(col=0;col<3;col++){
			printf("\nfila %d, columna %d:", fil+1, col+1);
			scanf("%d", &matriz_1[fil][col]);
		}
	}
	//Muestro la matriz
	printf("\n Has INTRODUCIDO LA MATRIZ : \n");
	for(fil=0;fil<3;fil++){
		for(col=0;col<3;col++){
			printf("%d", matriz_1[fil][col]);
		}
		printf("\n");
	}
	
	
	// Leo la matriz 2
	// Las sumo
	// Muestro la matriz suma
	
	return 0;
}
