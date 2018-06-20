
#include "Pojazd.h"


void Modul_dzialu_transportu::Pojazd::sprawdz_stan_ubezpieczenia() {
	std::cout << "Pojazd " << nazwa << " ma " << stan_ubezpieczenia << " ubezpieczenie." << std::endl;
}

void Modul_dzialu_transportu::Pojazd::sprawdz_stan_paliwa() {
	std::cout << "Pojazd " << nazwa << " ma " << ilosc_paliwa << "% paliwa w baku." << std::endl;
}

void Modul_dzialu_transportu::Pojazd::sprawdz_status() {
	std::cout << "Pojazd: " << nazwa << " jest " << status << "." << std::endl;
	std::cout << "Stan techniczny: " << stan_techniczny << std::endl;

}

Modul_dzialu_transportu::Pojazd::Pojazd() {
	nazwa = "Dostawczak";
	ladownosc = 50;
	powierzchnia = 25;
	stan_techniczny = "sprawny";
	ilosc_paliwa = 100;
	stan_ubezpieczenia = "wazne";
	status = "wolny";
}