#include<stdio.h>
main(){
	char letra;
	char *pletra;
	letra= 'L';
	pletra= &letra;
	printf("La variable letra= %c",letra);
	printf("\nLa posicion de memoria de letra = %X",&letra);
	printf("\n pletra = %X", pletra);
	printf("El contenido de letra desde su puntero = %c", *pletra);
	return 0;
}
http://maxus.fis.usal.es/FICHAS_C.WEB/01xx_PAGS/0103.html
