#include <iostream>

int main()
{
	double prezzo;
	int ore_lavoro;
	const double IVA = 22;
	double prezzo_ivato;
	double totale;

	std::cout << "Inserisci il prezzo del lavoro: ";
	std::cin >> prezzo;

	prezzo_ivato = prezzo * IVA / 100;

	std::cout << "Inserisci le ore lavorate: ";
	std::cin >> ore_lavoro;

	totale = prezzo + prezzo_ivato;

	std::cout << "--- Riepilogo ---" << std::endl;
	std::cout << "Prezzo: " << prezzo << std::endl;
	std::cout << "Ore lavorative: " << ore_lavoro << std::endl;
	std::cout << "IVA: " << totale - prezzo << std::endl;
	std::cout << "Totale: " << totale << std::endl;

	return 0;
}