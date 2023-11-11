#include "iostream"
#include "studio.h"
#include "conio.h"
#include "windows.h"
using namespace std;
int main(){
	string user, pass, usuario = "Sistemas", password = "Admin01";
	char seguir, opc;
	int multiplicacion, numero,i;
	
	cout<<"Bienvenido(a) por favor ingresa al sistema";
	cout<<"Ingresa tu usuario:  ";
	cin>>user;
	cout<<"ingresa tu password:  ";
	cin>>pass;
	if(user == usuario && pass == password){
		do{
			cout<<"por favor ingresa el numero de la tabla a imprimir:  ";
			cin>>numero;
			for(int i= 1;i<=10;i++){
				multiplicacion = i*numero;
				cout<<numero<<" x "<<i<<" = "<<multiplicacion<<endl;
			}
			cout<<"¿Quieres generar otra tabla de multiplicar(s"
		}
	}
}
