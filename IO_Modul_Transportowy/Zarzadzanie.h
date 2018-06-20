#include <string>
#include <iostream>
#include "Pojazd.h"
#include "Zespol_pracownikow.h"
#include "Pracownik_fizyczny.h"
#include "Pracownik_kierowca.h"
#include "Pracownik_logistyk.h"
#include "Ladunek.h"
#include "Przedmiot.h"



#ifndef ZARZADZANIE_H
#define ZARZADZANIE_H

namespace Modul_dzialu_transportu {
	class Zarzadzanie {

	private:
		int nr_zlecenia;
		std::string termin_wykonania;
		std::string stan_zlecenia;
		int wymagana_powierzchnia;
		int nr_zespolu;		
		Pojazd *wybranypojazd=NULL;
		Ladunek **ladunek = NULL;
		Zespol_pracownikow ** zespol_pracownikow = NULL;
	public:
		void dobierz_zespol();

		void wyswietl_informacje();

		void zmien_stan();

		void oblicz_powierzchnie();

		void dobierz_pojazd();

		void sprawdz_pojazd();

		void zarzadzaj_ladunkiem();
	};
}

#endif
