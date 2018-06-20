#include "Przedmiot.h"



void Modul_dzialu_transportu::Przedmiot::pokaz_przedmiot() {
	std::cout << "Id: " << id << std::endl;
	std::cout << "nazwa: " << nazwa << std::endl;
	std::cout << "waga: " << waga << std::endl;
	std::cout << "wysokosc: " << wysokosc << std::endl;
	std::cout << "glebokosc: " << glebokosc << std::endl;
	std::cout << "szerokosc: " << szerokosc << std::endl;
}

void Modul_dzialu_transportu::Przedmiot::dodaj_przedmiot() {
	std::cout << "Podaj id: ";
	std::cin >> id;
	std::cout << "Podaj nazwe: ";
	std::cin >> nazwa;
	std::cout << "Podaj wage: ";
	std::cin >> waga;
	std::cout << "Podaj wysokosc: ";
	std::cin >> wysokosc;
	std::cout << "Podaj glebokosc: ";
	std::cin >> glebokosc;
	std::cout << "Podaj szerokosc: ";
	std::cin >> szerokosc;	
}

void Modul_dzialu_transportu::Przedmiot::usun_przedmiot() {
	id = 0;
	nazwa = "0";
	waga = 0;
	wysokosc = 0;
	glebokosc = 0;
	szerokosc = 0;
}

void Modul_dzialu_transportu::Przedmiot::modyfikuj_przedmiot() {
	int x;
	std::cout << "Co chcesz zrobic " << std::endl;
	std::cout << "1 Id " << std::endl;
	std::cout << "2 nazwa " << std::endl;
	std::cout << "3 waga " << std::endl;
	std::cout << "4 wysokosc " << std::endl;
	std::cout << "5 glebokosc " << std::endl;
	std::cout << "6 szerokosc " << std::endl;
	std::cin >> x;
	switch (x)
	{
	case 1:
		std::cin >> id;
		break;
	case 2:
		std::cin >> nazwa;
		break;
	case 3:
		std::cin >> waga;
		break;
	case 4:
		std::cin >> wysokosc;
		break;
	case 5:
		std::cin >> glebokosc;		
		break;
	case 6:
		std::cin >> szerokosc;
		break;
	default:
		break;
	}
}

int Modul_dzialu_transportu::Przedmiot::zwroc_wymiar(int i) {
	switch (i)
	{
	case 1:
		return szerokosc;
	case 2:
		return glebokosc;
	case 3:
		return wysokosc;
	default:
		break;
	}
}