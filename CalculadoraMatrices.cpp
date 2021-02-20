#include<iostream>
#include<stdlib.h>
using namespace std;

void Datos();
void sumarMatrices(int **,int**,int,int);
void MatrizResultante(int **,int,int);
int **puntero_matriz1;
int **puntero_matriz2;
int nFilas;
int nCol;

int main(){
	Datos();
	sumarMatrices(puntero_matriz1, puntero_matriz2,nFilas,nCol);
	MatrizResultante(puntero_matriz1,nFilas,nCol);
	
	//Liberar memoria utilizada matriz1
	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz1[i];
	}
	delete[] puntero_matriz1;
	
	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz2[i];
	}
	delete[] puntero_matriz2;
	return 0;
}

void Datos(){
	cout<<"Dime el numero de filas: ";
	cin>>nFilas;
	cout<<"Dime el numero de columnas: ";
	cin>>nCol;
	
	//primera matriz
	puntero_matriz1= new int*[nFilas];
	for(int i=0;i<nFilas;i++){
		puntero_matriz1[i] = new int[nCol]; //He reservado memoria para las filas y columnas
	}
	cout<<"\nDime los elementos de la primera matriz: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Dime un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz1+i)+j);
		}
	}



	//segunda matriz
	puntero_matriz2= new int*[nFilas];
	for(int i=0;i<nFilas;i++){
		puntero_matriz2[i] = new int[nCol];
	}
	cout<<"\nDime los elementos de la segunda matriz: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Dime un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz2+i)+j);
		}
	}
}

void sumarMatrices(int **puntero_matriz1, int**puntero_matriz2, int nFilas,int nCol){
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			*(*(puntero_matriz1+i)+j) += *(*(puntero_matriz2+i)+j); //la suma la guardo en el putero_matriz1
		}
	}
}
void MatrizResultante(int **puntero_matriz1,int nFilas, int nCol){
	cout<<"\nLa suma de las 2 matrices es: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<*(*(puntero_matriz1+i)+j)<<" "; //puntero_matriz[i][j]
	    }
	    cout<<"\n"; //para separar las filas de la matriz
	}
}

