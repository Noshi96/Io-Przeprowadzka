#include "Pracownik_logistyk.h"



void Modul_dzialu_transportu::Pracownik_logistyk::dodaj_pracownika() {
	std::cout << "Podaj imie logistyka: ";
	std::cin >> imie;
	std::cout << "Podaj nazwisko logistyka: ";
	std::cin >> nazwisko;
	std::cout << "Podaj numer telefonu logistyka: ";
	std::cin >> numer_telefonu;
}

void Modul_dzialu_transportu::Pracownik_logistyk::usun_pracownika() {
	imie = "0";
	nazwisko = "0";
	numer_telefonu = "0";
}

void Modul_dzialu_transportu::Pracownik_logistyk::modyfikuj_pracownika() {
	int x;
	std::cout << "Co chcesz zmodyfikowac " << std::endl;
	std::cout << "1 imie " << std::endl;
	std::cout << "2 nazwisko " << std::endl;
	std::cout << "3 numer telefonu " << std::endl;
	std::cin >> x;
	switch (x)
	{
	case 1:
		std::cin >> imie;
		break;
	case 2:
		std::cin >> nazwisko;
		break;
	case 3:
		std::cin >> numer_telefonu;
		break;
	default:
		break;
	}
}

void Modul_dzialu_transportu::Pracownik_logistyk::wyswietl_pracownika() {
	std::cout << "Logistyk" << std::endl;
	std::cout << imie << std::endl;
	std::cout << nazwisko << std::endl;
	std::cout << numer_telefonu << std::endl;
}


