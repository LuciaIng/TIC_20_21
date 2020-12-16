#include<stdio.h>
 
main (){
 	int cont,num;
 	int tabla;
 	printf("Introduce un numero: ");
	scanf("%d",&tabla);
 	printf("******************");
 	printf("*TABLA DEL %d *",tabla);
 	printf("******************");
 	for(cont=0;cont<=10;cont++){
	 
 		printf(" %d x %d= %d\n " ,tabla,cont,tabla*cont);
 		
	}
 	return 0;
}
