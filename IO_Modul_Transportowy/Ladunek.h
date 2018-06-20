
#ifndef LADUNEK_H
#define LADUNEK_H

namespace Modul_dzialu_transportu {
	class Ladunek {


	public:
		virtual void dodaj_przedmiot()=0;

		virtual void usun_przedmiot()=0;

		virtual void modyfikuj_przedmiot()=0;

		virtual void pokaz_przedmiot()=0;

		virtual int zwroc_wymiar(int i) = 0;
	};
}

#endif
