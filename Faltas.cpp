#include "iostream"
#include "string"
using namespace std;
int main(){
	const int numAlumnos = 3;
	int asistencia[numAlumnos];
	
	for(int i=0; i<numAlumnos; i++){
		asistencia[i]=0;
	}
	cout<<"Bienvenido al sistema de asistencia" <<endl;
	cout<<"Registra la asistencia de los alumnos:" <<endl;
	cout<< "Registra el nombre del alumno y indica si ¿asistio o no?" <<endl;
	for (int i = 0; i< numAlumnos; i++){
		string nombre;
		char asistio;
		cout<<"Alumno"<< i + 1<<":";
		cin>> nombre;
		cout<< "¿Asistio? (S/N:";
		cin>> asistio;
		
		if(asistio == 'S' || asistio == 's'){
			asistencia [i] = 1;
		}
	}
	int faltas = 0;
	for (int i = 0; i< numAlumnos; i++){
		if (asistencia[i] ==0){
			faltas++;
		}
	}
	cout<< "numero de alumnos que faltaron:"<<faltas<<endl;
	cout<< "numero de alumnosque asistieron:"<< asistencia<<endl;
	  
	  return 0;
}
