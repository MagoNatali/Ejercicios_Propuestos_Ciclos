#include <iostream>

using namespace std;

int main(){
	//4.- Que muestre los números pares que haya del 1 al 100.
	
	//1era Forma
	//for(int i=2;i<=100;i+=2)
		//cout<<i<<endl;
	//2da forma
	for(int j=1;j<=100;j++){
		if(j%2==0)
			cout<<j<<endl;
	}
	return 0;
}
