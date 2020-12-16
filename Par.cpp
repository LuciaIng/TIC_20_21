//funcion que devuelva 1 si es par
//y 0 si no lo es.
#include<stdio.h>
int esPar(int num){
	int respuesta;
	if(num%2==0)
		respuesta=1;
	else
		respuesta=0;
	
	return(respuesta);
}
int main(){
	int num;
	printf("Introduce un numero: ");
	scanf("%d",&num);
	if (esPar(num)==1)
		printf("%d es par",num);
	else printf("%d es impar",num);
	
	return 0;
	
}
