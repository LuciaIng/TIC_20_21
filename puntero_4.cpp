#include<stdio.h>
//¿y los arrays?

int main(){
	char letras[10];
	int cont;
	letras[0]='H';
	letras[1]='O';
	letras[2]='L';
	letras[3]='A';
	for(cont=0;cont<10;cont++){
		printf("%c", *(letras+cont));
		//printf("%c",letras[cont]);
	}
	return 0;
	
}
