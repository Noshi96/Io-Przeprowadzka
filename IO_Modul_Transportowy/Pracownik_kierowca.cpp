#include "Pracownik_kierowca.h"



void Modul_dzialu_transportu::Pracownik_kierowca::dodaj_pracownika() {
	std::cout << "Podaj imie kierowcy: ";
	std::cin >> imie;
	std::cout << "Podaj nazwisko kierowcy: ";
	std::cin >> nazwisko;
	std::cout << "Podaj numer telefonu kierowcy: ";
	std::cin >> numer_telefonu;
	std::cout << "Podaj kategoria prawa jazdy kierowcy: ";
	std::cin >> kategoria_prawa_jazdy;
}

void Modul_dzialu_transportu::Pracownik_kierowca::usun_pracownika() {
	imie = "0";
	nazwisko = "0";
	numer_telefonu = "0";
	kategoria_prawa_jazdy = "0";
}

void Modul_dzialu_transportu::Pracownik_kierowca::modyfikuj_pracownika() {
	int x;
	std::cout << "Co chcesz zmodyfikowac " << std::endl;
	std::cout << "1 imie " << std::endl;
	std::cout << "2 nazwisko " << std::endl;
	std::cout << "3 numer telefonu " << std::endl;
	std::cout << "4 kategorie prawa jazdy " << std::endl;
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
	case 4:
		std::cin >> kategoria_prawa_jazdy;
		break;
	default:
		break;
	}
}

void Modul_dzialu_transportu::Pracownik_kierowca::wyswietl_pracownika() {
	std::cout << "Kierowca" << std::endl;
	std::cout << imie << std::endl;
	std::cout << nazwisko << std::endl;
	std::cout << numer_telefonu << std::endl;
}


