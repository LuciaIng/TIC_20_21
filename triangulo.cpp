//Función que dibuje un árbol de navidad
# include <stdio.h>

int main (){
 int fila,aux,espacio,aux2;
 const int NUM_FILAS = 5; 
 const int TRONCO = 3;
 const int POS_TRONCO = 6;
 
 for (fila=0,aux=NUM_FILAS;fila<NUM_FILAS;fila++,aux--){
  for(espacio=0;espacio<aux;espacio++)
   printf(" ");
   for(aux2=NUM_FILAS;aux2>=aux;aux2--){
    if(aux2!=NUM_FILAS)
     printf("*");
    printf ("*");
   }
   printf ("\n");
 }
 
 for(aux=1;aux<=TRONCO;aux++){
  for(fila=1;fila<POS_TRONCO;fila++)
   printf(" ");
   printf("*");
   printf ("\n");
 }
 printf("FELIZ NAVIDAD");
}
