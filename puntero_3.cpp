#include<stdio.h>
//El truco de los cubiletes
int main(){
	int x=2;
	int y=3;
	int z=5;
	int *px;
	int *py;
	int *pz;
	
	px=&x;
	py=&y;
	pz=&z;
	printf("\nx= %d direccion %X",x,&x);
	printf("\ny= %d direccion %X",y,&y);
	printf("\nz= %d direccion %X",z,&z);
	printf("\n x+y+z=%d", *px+*py+*pz);
	
	return 0;
	
}
