#include <string>
#include <iostream>
#include "Zespol_pracownikow.h"

#ifndef PRACOWNIK_FIZYCZNY_H
#define PRACOWNIK_FIZYCZNY_H

namespace Modul_dzialu_transportu {
	class Pracownik_fizyczny : public Modul_dzialu_transportu::Zespol_pracownikow {

	private:
		std::string imie;
		std::string nazwisko;
		std::string numer_telefonu;

	public:
		void dodaj_pracownika();

		void usun_pracownika();

		void modyfikuj_pracownika();

		void wyswietl_pracownika();
	};
}

#endif
