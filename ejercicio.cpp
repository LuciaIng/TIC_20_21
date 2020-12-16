//Funcion que recibe un numero y lo descompone en factores primos POSIBLE EXAMEN

#include<stdio.h>
int esDivisor(int num, int divisor){
	int espuesta=0;
	if(num%divisor==0) respuesta=1;
	return (respuesta);
}

int esPrimo(int num){
	int respuesta=1;
	int cont:
	for(cont=num-1;cont>1;cont--){
		if(num%cont==0) respuesta=0;
		
	}
	
	return(respuesta):
}
int main(){
	int num;
	printf("Introduce un numero: ");
	scanf("%d",&num);
	
	
	return 0;
}
