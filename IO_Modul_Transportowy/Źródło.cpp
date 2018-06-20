#include "std.h"



int main() {
	int wybor = 0;
	int petla1 = 1, petla2 = 1,petla3=1;
	Modul_dzialu_transportu::Zarzadzanie *zarzadzaj_transportem = new Modul_dzialu_transportu::Zarzadzanie();
	while (petla1) {
		cout << endl << " Menu glowne" << endl;
		cout << "1. Modul administracyjny " << endl;
		cout << "2. Modul zamowienia" << endl;
		cout << "3. Wyjdz" << endl;
		cin >> wybor;

		switch (wybor) {
		case 1:
			
			break;
		case 2:
			petla2 = 1;
			while (petla2) {

				cout << endl << endl << " Modul zamowien" << endl;
				cout << "1.Dzial transportu" << endl;
				cout << "2.Dzial zamowien" << endl;
				cout << "3.Dzial wczesnego rozeznania" << endl;
				cout << "4. Powrot" << endl;

				cin >> wybor;

				switch (wybor) {
				case 1:
					petla3 = 1;
					while (petla3) {
						std::cout << "Co chcesz zrobic " << std::endl;
						std::cout << "1. Dobierz zespol" << std::endl;
						std::cout << "2. Wyswietl informacje " << std::endl;
						std::cout << "3. Zmien stan " << std::endl;
						std::cout << "4. Zarzadzaj ladunkiem " << std::endl;
						std::cout << "5. Oblicz powierzchnie " << std::endl;
						std::cout << "6. Dobierz pojazd " << std::endl;
						std::cout << "7. Sprawdz pojazd " << std::endl;
						std::cout << "8. Powrot " << std::endl;
						cin >> wybor;
						switch (wybor)
						{
						case 1:
							zarzadzaj_transportem->dobierz_zespol();
							break;

						case 2:
							zarzadzaj_transportem->wyswietl_informacje();
							break;

						case 3:
							zarzadzaj_transportem->zmien_stan();
							break;

						case 4:
							zarzadzaj_transportem->zarzadzaj_ladunkiem();
							break;

						case 5:
							zarzadzaj_transportem->oblicz_powierzchnie();
							break;

						case 6:
							zarzadzaj_transportem->dobierz_pojazd();
							break;
						case 7:
							zarzadzaj_transportem->sprawdz_pojazd();
							break;

						default:
							petla3 = 0;
							break;
						}
					}
				

					break;
					//koniec case 1
				case 2:
					
					break;
				case 3:
					break;
				default:
					petla2 = 0;
					break;
				}
			}
			break;
			//koniec case 2
		
		default:
			petla1 = 0;
			break;
		}
		
	}






	return 0;
}