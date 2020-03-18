#include <iostream>

using namespace std;

int main(){
	/*1.- Ingresar el ultimo término de la serie mostrado a continuación: 2, 4, 6, 8,10,….., n; 
	mostrar la suma total de la serie completa en la pantalla.*/
	int ultimoTermino,n=2,sumaTotal=0;
	cout<<"Ingrese el Ultimo Termino de la Serie 2,4,6,8 ... n"<<endl;
	cin>>ultimoTermino;
	while(n<=ultimoTermino){
		sumaTotal += n;
		n+=2;
	}
	cout<<"La suma Total de la serie es: "<<sumaTotal<<endl;
	return 0;
}
