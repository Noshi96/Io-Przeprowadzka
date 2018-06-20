#include "Zespol_pracownikow.h"
#include <string>
#include <iostream>

#ifndef PRACOWNIK_KIEROWCA_H
#define PRACOWNIK_KIEROWCA_H

namespace Modul_dzialu_transportu {
	class Pracownik_kierowca : public Modul_dzialu_transportu::Zespol_pracownikow {

	private:
		std::string imie;
		std::string nazwisko;
		std::string numer_telefonu;
		std::string kategoria_prawa_jazdy;

	public:
		void dodaj_pracownika();

		void usun_pracownika();

		void modyfikuj_pracownika();

		void wyswietl_pracownika();

		
	};
}

#endif
