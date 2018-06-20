#include <iostream>
#include <string>
#ifndef POJAZD_H
#define POJAZD_H

namespace Modul_dzialu_transportu {
	class Pojazd {

	private:
		std::string nazwa;
		int ladownosc;
		int powierzchnia;
		std::string stan_techniczny;
		int ilosc_paliwa;
		std::string stan_ubezpieczenia;
		std::string status;

	public:
		Pojazd();

		void sprawdz_stan_ubezpieczenia();

		void sprawdz_stan_paliwa();

		void sprawdz_status();
	};
}

#endif
