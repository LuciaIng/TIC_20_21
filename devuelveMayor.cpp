//Funciones
#include<stdio.h>
int devuelveMayor(int num1, int num2){
	int mayor;
	if(num1>num2){
		mayor=num1;
	}else{
		mayor=num2;
	}
	return(num1+num2);
}
int main(){
	int num1;
	int num2;
	int mayor;
	printf("Numero 1= ");
	scanf("%d",&num1);
	printf("Numero 2= ");
	scanf("%d",&num2);
	mayor=devuelveMayor(num1,num2);
	printf("El mayor de %d + %d= %d", num1,num2,mayor);
	return 0;
	
}
