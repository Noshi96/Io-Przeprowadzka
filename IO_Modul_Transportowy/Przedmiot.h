#include <iostream>
#include <string>
#include "Ladunek.h"
#ifndef PRZEDMIOT_H
#define PRZEDMIOT_H

namespace Modul_dzialu_transportu {
	class Przedmiot : public Modul_dzialu_transportu::Ladunek {

	private:

		int id;
		std::string nazwa;
		float waga;
		int wysokosc;
		int glebokosc;
		int szerokosc;

	public:
		void pokaz_przedmiot();
		void dodaj_przedmiot();
		void usun_przedmiot();
		void modyfikuj_przedmiot();
		int zwroc_wymiar(int i);
	};
}

#endif
