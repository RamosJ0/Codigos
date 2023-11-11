#include<iostream>
using namespace std;
int main(){

	int miArreglo[5];
	string nombre[3];
	
	miArreglo [0] = 10;
	miArreglo [1] = 20;
	miArreglo [2] = 30;
	miArreglo [3] = 40;
	miArreglo [4] = 50;
	
	nombre[0] = "Ramos";
	nombre[1] = "Jorge";
	nombre[2] = "Karol";
	
	for (int i=0; i<=4; i++){
		cout<<"Elementos: "<<i<<":"<<miArreglo[i]<<endl;
	}
	
	for (int e=0; e<=2; e++){
		cout<<"Los nombres del arreglo son"<<e<<"e"<<nombre[e]<<endl;
	}
	return 0;
}	

