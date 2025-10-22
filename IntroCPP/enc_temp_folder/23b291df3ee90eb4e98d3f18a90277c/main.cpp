
#include <iostream>

using namespace std;

/*

*/

int main()
{
	// Print Hello World to the console
	cout << "Hello, C++ World!" << endl;

	// Base type c++

	// Integer
	int numeroIntero = -3; // numero intero con segno
	unsigned int numeroInteroPositivo = 5; // numero intero senza segno

	// Floating point, con precisione singola
	float numeroDecimale = 3.14f; // numero decimale a precisione singola
	float numeroDecimalePiccolo = .2f; // numero decimale più piccolo di 1

	// Floating point, con precisione doppia
	double numeroDecimaleDoppiaPrecisione = 3.141592653589793; // numero decimale a precisione doppia

	// Carattere singolo
	char carattere = 'A'; // singolo carattere racchiuso tra apici singoli

	// Booleano
	bool valoreBooleano = true; // valore booleano, può essere true o false
	bool altroValoreBooleano = false;

	// Stampa i valori delle variabili
	cout << "--- ESEMPI DI VARIABILI: ---" << endl;


	cout << "Intero: (int)" << numeroIntero << endl;
	cout << "Intero positivo: (unsigned int)" << numeroInteroPositivo << endl;
	cout << "Decimale (float): " << numeroDecimale << endl;
	cout << "Decimale piccolo (float): " << numeroDecimalePiccolo << endl;
	cout << "Decimale doppia precisione (double): " << numeroDecimaleDoppiaPrecisione << endl;
	cout << "Carattere (char): " << carattere << endl;
	cout << "Booleano (bool): " << valoreBooleano << endl;
	cout << "Altro Booleano (bool): " << altroValoreBooleano << endl;

	cout << "---------------------------" << endl;

	cout << "--- DIMENSIONE IN BYTE DEI TIPI: ---" << endl;

	cout << "Dimensione :" << sizeof(int) << " byte per il tipo int" << endl;
	cout << "Dimensione :" << sizeof(unsigned int) << " byte per il tipo unsigned int" << endl;
	cout << "Dimensione :" << sizeof(float) << " byte per il tipo float" << endl;
	cout << "Dimensione :" << sizeof(double) << " byte per il tipo double" << endl;
	cout << "Dimensione :" << sizeof(char) << " byte per il tipo char" << endl;
	cout << "Dimensione :" << sizeof(bool) << " byte per il tipo bool" << endl;


	cout << "---------------------------" << endl;

	// tipi composti: array, struct, class

	// Array

	int arrayDiInteri[5] = { 1, 2, 3, 4, 5 }; // array di 5 interi

	// String

	

	cin.get();

	return 0;
}