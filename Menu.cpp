#include <iostream>
using namespace std;

// Declaración de funciones
void ingresarNumero(int &numero);
int sumarNumeros(int num1, int num2);
bool esPrimo(int numero);

int main() {
	int opcion;
	
	do { //funcion para imprimir las opciones del menu
		cout << "Menú:" << endl;
		cout << "1. Ingresar número" << endl;
		cout << "2. Sumar números" << endl;
		cout << "3. Verificar si un número es primo" << endl;
		cout << "0. Salir" << endl;
		
		cout << "Selecciona una opción: "; //Pedir cual es la opcion
		cin >> opcion;
		
		switch (opcion) {
		case 0: //si ingresa en numero 0 el programa termina 
			cout << "Saliendo del programa." << endl;
			break;
		case 1: {//si ingresa en numero 1 da la opcion de ingresar un numero y mostrarlo 
			int num;
			ingresarNumero(num);
			cout << "Número ingresado: " << num << endl;
			break;
		}
		case 2: {//si ingresa en numero 2 pedimos 2 numeros y hacemos la suma
			int num1, num2;
			ingresarNumero(num1);
			ingresarNumero(num2);
			int producto = sumarNumeros(num1, num2);
			cout << "La suma de los números es: " << producto << endl; //mostramos el resultado
			break;
		}
		case 3: {//si ingresa en numero 3 pedimos un numero 
			int num;
			ingresarNumero(num);
			if (esPrimo(num)) {
				cout << num << " es un número primo." << endl; //se muestra si es primo
			} else {
				cout << num << " no es un número primo." << endl; //se muestra si no es primo
			}
			break;
		}
		default:
			cout << "Opción no válida. Por favor, selecciona una opción válida." << endl;
		}
		
	} while (opcion != 0);
	
	return 0;
}

// Implementación de funciones
void ingresarNumero(int &numero) { //mostramos el numero que se ingreso con el signo & porque cambia el resultado
	cout << "Ingresa un número: ";
	cin >> numero;
}

int sumarNumeros(int num1, int num2) { // llamamos las variables y las sumamos
	return num1 + num2;
}

bool esPrimo(int numero) {
	if (numero < 2) { //vemos si el numero es menor a 1 mandamos la señal de falso
		return false;
	}
	for (int i = 2; i <= numero / 2; ++i) {  // Comprueba si el número es divisible por el valor actual de 'i'.
		if (numero % i == 0) {
			return false;// Si es divisible, el número no es primo
		}
	}
	return true; // Si el bucle no ha terminado antes, entonces el número es primo
	
	  	
}
