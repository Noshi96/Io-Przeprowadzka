
#ifndef ZESPOL_PRACOWNIKOW_H
#define ZESPOL_PRACOWNIKOW_H

namespace Modul_dzialu_transportu {
	class Zespol_pracownikow {


	public:
		virtual void dodaj_pracownika() = 0;

		virtual void usun_pracownika() = 0;

		virtual void modyfikuj_pracownika() = 0;

		virtual void wyswietl_pracownika() = 0;
	};
}

#endif
