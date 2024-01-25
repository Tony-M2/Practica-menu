#include <iostream>
using namespace std;
//Menu con 3 opciones 
//1.ingresar numeros 
//2.sumar 
//3.numero es primo
//Todo con funciones parametro por referencia
void ingresar(int &n1,int &n2)
{
	cout<<"ingresar un numero ";
	cin>>n1;
	cout<<"ingresar otro numero ";
	cin>>n2;
}
void sumar(int n1, int n2, int &producto)
{
	producto=n1+n2;
}
	
int main(int argc, char *argv[]) {
	int n1,n2,producto;
	ingresar(n1,n2);
	sumar(n1,n2,producto);
	cout<<"El total de la suma es: "<<producto<<endl;
	return 0;
}
