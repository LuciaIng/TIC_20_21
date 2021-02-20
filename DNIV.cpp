#include<iostream>
using namespace std;


int main(){
	int DNI;
	
	char letra[] = {'T','R','W','A','G','M','Y','F','P','D','X','B','N','J','Z','S','Q','V','H','L','C','K','E'};
	
	cout<<"Introduce los numeros de tu dni: ";
	cin>>DNI;
	
	for(int i=0;i<23;i++){
		if(DNI%23== i){
			cout<<"La letra de tu DNI es ["<<i<<"]:"<<letra[i];
		}
	}
	
	return 0;
}
