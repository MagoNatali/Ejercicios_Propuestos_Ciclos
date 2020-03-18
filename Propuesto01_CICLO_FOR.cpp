#include <iostream>

using namespace std;

int main(){
	//1.- Que pida un número y diga si es primo o no.
	int numero,contador=0;
	cout<<"Ingrese un Numero"<<endl;
	cin>>numero;
	for(int i=1;i<=numero;i++){
		if(numero%i==0)
			contador++;
	}
	if(contador == 2)
		cout<<"El Numero ingresado es PRIMO"<<endl;
	else
		cout<<"El Numero ingresado NO es PRIMO"<<endl;
	return 0;
}
