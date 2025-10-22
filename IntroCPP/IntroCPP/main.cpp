
#include <iostream>
#include "IntroCPP.h"

using namespace std;

/*

*/

struct Studente {
	int anni;
	float mediaVoti;
	string nome;

	// Default Constructor
	Studente() : anni(0), mediaVoti(.0f), nome("") 
	{
		cout << "STUDENTE INIZIALIZZATO " << endl;
	}

	// Custom Constructor
	Studente(const string& newNome, int newAnni, float newMediaVoti)
	{
		anni = newAnni;
		nome = newNome;
		mediaVoti = newMediaVoti;
	}

};

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
	float numeroDecimalePiccolo = .2f; // numero decimale pi� piccolo di 1

	// Floating point, con precisione doppia
	double numeroDecimaleDoppiaPrecisione = 3.141592653589793; // numero decimale a precisione doppia

	// Carattere singolo
	char carattere = 'A'; // singolo carattere racchiuso tra apici singoli

	// Booleano
	bool valoreBooleano = true; // valore booleano, pu� essere true o false
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
	char arrayDiCharaceter[5] = { 'H', 'E', 'L', 'L', 'O' };
	float arrayDiFloat[5] = { 3.0f, 2.5f, 1.5f, .6f, .4f };
	bool arrayDiBool[5] = { true, true, false, true, false };

	// String
	string testo = "Esempio di stringa in C++";
	string arrayDiStringhe[4] = { "Ciao", "Come va", "Leo", "Matteo" };

	//Struct Studente

	Studente randomStudente;

	Studente randomCustomStudente(testo, 21, .4);

	randomStudente.nome = "Random";
	randomStudente.anni = 20;
	randomStudente.mediaVoti = 8.4f;

	// Class

	Rettangolo rettangolo(5, 10);

	int area = rettangolo.calcoloArea();

	// Esempi di Weapon


	// Stampare dimensioni delle diverse classi create, degli array e delle stringhe
	

	cin.get();

	return 0;
}