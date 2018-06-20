#include <string>
#include <iostream>
#include "Zespol_pracownikow.h"
#ifndef PRACOWNIK_LOGISTYK_H
#define PRACOWNIK_LOGISTYK_H

namespace Modul_dzialu_transportu {
	class Pracownik_logistyk : public Modul_dzialu_transportu::Zespol_pracownikow {

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
