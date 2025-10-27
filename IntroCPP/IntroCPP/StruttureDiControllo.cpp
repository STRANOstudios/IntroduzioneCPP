#include "StruttureDiControllo.h"
#include <vector>

void Calcolatrice::EsempioIfElse(int numero)
{
	if (numero > 0)
	{
		// Il numero � positivo
	}
	else if (numero < 0)
	{
		// Il numero � negativo
	}
	else
	{
		// Il numero � zero
	}
}

void Calcolatrice::EsempioSwitchCase(GiorniSettimana operatore)
{
	switch (operatore)
	{
	case Luned�:
		// Azioni per Luned�
		break;
	case Marted�:
		// Azioni per Marted�
		break;
	case Mercoled�:
		// Azioni per Mercoled�
		break;
	case Gioved�:
		// Azioni per Gioved�
		break;
	case Venerd�:
		// Azioni per Venerd�
		break;
	case Sabato:
		// Azioni per Sabato
		break;
	case Domenica:
		// Azioni per Domenica
		break;
	default:
		// Caso predefinito
		break;
	}


}

void Calcolatrice::EsempioFor(int limite)
{
	for (int i = 0; i < limite; i++)
	{
		// Azioni da ripetere
	}
}

void Calcolatrice::EsempioWhile(int limite)
{
	int i = 0;
	while (i < limite)
	{
		// Azioni da ripetere
		i++;
	}
}

void Calcolatrice::EsempioDoWhile(int limite)
{
	int i = 0;
	do
	{
		// Azioni da ripetere
		i++;
	} while (i < limite);
}

void Calcolatrice::EsempioForEach()
{
	std::vector<int> numeri = { 10, 20, 30, 40, 50 };

	for (int numero : numeri)
	{
		// Azioni da eseguire per ogni elemento
		numero += 5;
	}

	/*
	C#
	
	foreach (int numero in numeri)
	{
		// Azioni da eseguire per ogni elemento
		numero += 5; // Questo non modifica l'elemento originale nella collezione
	}
	
	*/
}
