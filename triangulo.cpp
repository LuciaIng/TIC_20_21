//Función que dibuje un árbol de navidad
#include<stdio.h>
/*
>Introduzca la altura del árbol: 5
		*
	   ***
	  *****
	 ********
    ***********
    	*
    	*
    FELIZ NAVIDAD
1.Empezamos por un problema más sencillo 
>Introduzca la altura del triangulo:5
*
**
***
****
*****
2. Lo complicamos un poco:
	*
   **
  ***
 ****
*****
3. Intentamos la copa del árbol:
para un árbol de 5
for(fila=altura-1; fila>=0;fila--)
fila=4 4 espacios + 1 asterisco
fila=3 3 espacios + 3 asteriscos
fila=2 2 espacios + 5 asteriscos
fila=1 1 espacios + 7 asteriscos
fila=0 0 espacios + 9 asteriscos
*=m*fila+n
*/
int main(){

	
	for (fila=1;fila<=altura;fila++){
		for(col=1;col<=fila,col++){
			printf("*");
		}
		printf("\n");
		}
}
