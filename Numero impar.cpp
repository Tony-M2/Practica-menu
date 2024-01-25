#include <iostream>

using namespace std;

int aleatorio()
{
	return rand() % 100;
}

bool esImpar(int numero){
	return numero %2!=0;
}
	
int main(int argc, char *argv[]) {
	int n,c=0,num;
	cout<<"Generar n numeros Impares, Ingrese la cantida de numeros a generar: ";
	cin>>n;
	while(c<n)
	{
		num=aleatorio();
		if(esImpar(num))
		{
			c++;
			cout<<"Impar["<<c<<"]:"<<num<<endl;
		}
	}
	
	return 0;
}
