//Incluimos las librerias que vamos usar
#include"iostream"
#include"string"
//el using le decimos que lea primero las librerias
using namespace std;
int main(){
	//ponemos las variables 
	string usuario="usuario";//Nombre de usuario sean correctos
	string contrasena="contrase�a";//La contrase�a es correcta 
	int intentos=3;//Se colocan el numero de intentos que vamos a dar
	while(intentos>0){
		//imprimimos lo que queramos solicitar y lo guardamos en las variables 
		string input_usuario,input_contrasena;
		cout<<" Ingresa tu usuario";
		cin>>input_usuario;
		cout<<"ingresa tu contrase�a ";
		cin>>input_contrasena;
		//usuamos el if para igualar o comparar los usuarios y las contrase�as 
		if(input_usuario==usuario&&input_contrasena==contrasena){
			cout<<"Inicio de sesion exitoso.�Bienvenido!\n";
			break;//salimos del bucle si el usuario y contrase�a son correctos
		}else{
			//Se ponen los intentos que vamos a dar 
			intentos--;
			cout<<"usuario y contrase�a son incorrectos.Intentos restantes"<<intentos<<"\n";
		}
	}
	if(intentos==0){
		cout<<"numero de intentos excedido.Cerrando sesi�n";
	}
 return 0;
  
}

