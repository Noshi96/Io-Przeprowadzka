#include "Zarzadzanie.h"

void Modul_dzialu_transportu::Zarzadzanie::dobierz_zespol() {
	int x = 4;
	zespol_pracownikow = new Zespol_pracownikow*[x];

	zespol_pracownikow[0] = new Pracownik_kierowca();
	zespol_pracownikow[1] = new Pracownik_logistyk();
	zespol_pracownikow[2] = new Pracownik_fizyczny();
	zespol_pracownikow[3] = new Pracownik_fizyczny();

	zespol_pracownikow[0]->dodaj_pracownika();
	zespol_pracownikow[1]->dodaj_pracownika();
	zespol_pracownikow[2]->dodaj_pracownika();
	zespol_pracownikow[3]->dodaj_pracownika();
	std::cout << std::endl << "Ktory to zespol: ";
	std::cin >> nr_zespolu;
}

void Modul_dzialu_transportu::Zarzadzanie::wyswietl_informacje() {
	std::cout << "Pracownicy" << std::endl;

	if(zespol_pracownikow !=NULL)
	for (int i = 0; i < 4; i++) {
		zespol_pracownikow[i]->wyswietl_pracownika();
	}

	std::cout << "Wymgana powierzchnia na przedmioty: "<<wymagana_powierzchnia << "m^2"<< std::endl;

}

void Modul_dzialu_transportu::Zarzadzanie::zmien_stan() {
	std::cout << "Wpisz stan zlecenia na jaki chcesz zmieniæ ?" << std::endl;
	std::cin >> stan_zlecenia;
	std::cout << "Wpisz date wykonania" << std::endl;
	std::cin >> termin_wykonania;
}

void Modul_dzialu_transportu::Zarzadzanie::oblicz_powierzchnie() {
	int szer=0;
	int gleb = 0;
	int x;
	std::cout << "Ile przedmiotow chcesz zliczyc: ";
	std::cin >> x;
	for (int i = 0; i < x; i++) {
		szer += ladunek[i]->zwroc_wymiar(1);
		gleb += ladunek[i]->zwroc_wymiar(2);
	}
	wymagana_powierzchnia = szer * gleb;

}

void Modul_dzialu_transportu::Zarzadzanie::dobierz_pojazd() {
	if (wybranypojazd == NULL) {
		wybranypojazd = new Pojazd();
	}
	else {
		delete wybranypojazd;
		wybranypojazd = new Pojazd();
	}
	std::cout << "Dobrano pojazd " << std::endl;
}

void Modul_dzialu_transportu::Zarzadzanie::sprawdz_pojazd() {
	if (wybranypojazd != NULL) {
		wybranypojazd->sprawdz_stan_paliwa();
		wybranypojazd->sprawdz_stan_ubezpieczenia();
		wybranypojazd->sprawdz_status();
	}
	
}

void Modul_dzialu_transportu::Zarzadzanie::zarzadzaj_ladunkiem() {
	int x;
	std::cout << "Co chcesz zrobic z ladunkiem " << std::endl << "1.Dodac" << std::endl << "2.Modyfikowac" << std::endl << "3. Wyswietlic" << std::endl;
	std::cout << "4. Usunac przemiot " << std::endl;
	std::cin >> x;
	switch (x)
	{
	case 1:
		std::cout << "Ile przedmiotow chcesz wprowadzic : ";
		std::cin >> x;
		ladunek = new Ladunek*[x];
		for (int i = 0; i < x; i++) {
			ladunek[i] = new Przedmiot();
			ladunek[i]->dodaj_przedmiot();
		}
		break;
	case 2:
		std::cout << "Ktory przedmiot chcesz zmodyfikowac?" << std::endl;
		std::cin >> x;
		ladunek[x]->modyfikuj_przedmiot();
		break;
	case 3:
		std::cout << "Ile przedmiotow chcesz wyswietlic?" << std::endl;
		std::cin >> x;
		for (int i = 0; i < x; i++) {
			if (ladunek[i] != NULL) {
				ladunek[i]->pokaz_przedmiot();
			}
		}
		break;
	case 4:
		std::cout << "Ktory przedmiot chcesz usunac?" << std::endl;
		std::cin >> x;
		ladunek[x]->usun_przedmiot();
		break;

	default:
		break;
	}
	
}
