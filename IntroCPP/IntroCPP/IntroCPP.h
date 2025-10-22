#pragma once // garantire che questo file sia incluso una sola volta

class Rettangolo 
{

private:

	int larghezza = 0;
	int altezza = 0;


public:

	Rettangolo(int w, int h)
	{
		larghezza = w;
		altezza = h;
	}


	int calcoloArea() const;

protected:


};

/* 

Creare una classe Weapon, con i seguenti membri:

nome arma
tipo
munizioni
tempoRicarica
inceppata
danno

metodo:

applicaDanno() -> stampare il danno e ritorna anche il danno

Informazioni() -> stampare le info base

Construttore custom (nome, tipo, danno)

*/