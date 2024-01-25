#include <iostream>
using namespace std;
int n1 , n2;

int sumar()
{
	return n1+n2;
}
int multiplicar()
{
	return n1*n2;
}

bool esParOImpar(int numero) {
	return numero % 2 == 0;
}

void ingresar ()
{
	cout<<"ingresar el primer numero ";
	cin>>n1;
	cout<<"ingresar el segundo numero ";
	cin>>n2;
}

	
int main(int argc, char *argv[]) {
	ingresar();
	cout<<"suma de los numeros es "<<sumar()<<endl;
	cout<<"multiplicacion de los numeros es "<<multiplicar()<<endl;
	if (esParOImpar(n1)) {
		cout << "Verdadero: El primer número es par." << endl;
	} else {
		cout << "Falso: El primer número es impar." << endl;
	}
	return 0;
}


