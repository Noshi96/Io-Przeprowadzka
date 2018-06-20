#include "Pracownik_fizyczny.h"



void Modul_dzialu_transportu::Pracownik_fizyczny::dodaj_pracownika() {
	std::cout << "Podaj imie pracownika fizycznego: ";
	std::cin >> imie;
	std::cout << "Podaj nazwisko pracownika fizycznego: ";
	std::cin >> nazwisko;
	std::cout << "Podaj numer telefonu pracownika fizycznego: ";
	std::cin >> numer_telefonu;
}

void Modul_dzialu_transportu::Pracownik_fizyczny::usun_pracownika() {
	imie = "0";
	nazwisko = "0";
	numer_telefonu = "0";
}

void Modul_dzialu_transportu::Pracownik_fizyczny::modyfikuj_pracownika() {
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

void Modul_dzialu_transportu::Pracownik_fizyczny::wyswietl_pracownika() {
	std::cout << "Pracownik fizyczny" << std::endl;
	std::cout << imie << std::endl;
	std::cout << nazwisko << std::endl;
	std::cout << numer_telefonu << std::endl;
}
