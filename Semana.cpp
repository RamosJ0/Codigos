#include "iostream"
using namespace std; 
int main(){
	int dia;
    cout<<"digita un n�mero de un dia de la semana"<<endl;
    cin>>dia;
    switch(dia){
    
	case 1:
    cout<<"Dia lunes";
    break;
	case 2:
	cout<<"Dia Martes";
	break;
	case 3:
	cout<<"Dia Mi�rcoles";
	break;
	case 4: 
	cout<< "Dia Jueves";
	break;
	case 5: 
	cout<<"Dia viernes";
	break;
	case 6:
	cout<<"Dia s�bado";
	break;
	case 7:
	cout<<"Dia Domingo";
	break;
	default: cout<<"no es un dia de la semana";
	break;
	    
	
	}
	return 0;
}
