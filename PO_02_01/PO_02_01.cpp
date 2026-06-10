#include <iostream>

using namespace std;

struct T_data {
	int dzien;
	int miesiac;
	int rok;
	void Pobierz_date();
	void Wypisz_date() {
		cout << "\n\tTwoja data urodzenia to: ";
		if (dzien < 10) {
			cout << "0";
		}
		cout << dzien << ".";
		if (miesiac < 10) {
			cout << "0";
		}
		cout << miesiac << ".";
		cout << rok << endl;
	}
};



void T_data::Pobierz_date() {
	cout << "Podaj swoja date urodzenia\ndzien: ";
	cin >> dzien;
	cout << "miesiac: ";
	cin >> miesiac;
	cout << "rok: ";
	cin >> rok;
}

class T_student {
	char inicjal[2] = "E";
	string nazwisko = "Lupa";
	int rok = 1;
	int grupa = 2;
	T_data moje_urodziny;
public:
	void Wczytaj();
	void Wypisz();
};

void T_student::Wczytaj() {
	int pomocnicza = 0;
	cout << "\nPodaj inicjal (1 znak): ";
	cin >> inicjal;
	cout << "Podaj nazwisko: ";
	cin >> nazwisko;
	cout << "Podaj rok: ";
	cin >> rok;
	while (rok > 6) {
		cout << "Podaj poprawny rok: ";
		cin >> rok;
	}
	cout << "Podaj grupe: ";
	cin >> grupa;
	cout << endl;
	if (grupa > 10) {
		cout << "Jestes pewny ze to poprawna grupa?\nJesli tak wpisz 1, jesli nie wpisz 0" << endl;
		cin >> pomocnicza;
	}

	if(pomocnicza == 0) {
		while (grupa > 10) {
			cout << "\nPodaj grupe jeszcze raz: ";
			cin >> grupa;
		}
	} 

	moje_urodziny.Pobierz_date();
	Wypisz();
	moje_urodziny.Wypisz_date();
}

void T_student::Wypisz() {
	cout << "\nZapisane wartosci: \n\tinicjal: ";
	cout << inicjal << "\n\tnazwisko: " <<nazwisko << "\n\trok: " << rok << "\n\tgrupa: " << grupa;
}

class Pole_prostokata {
	float a;
	float b;
	float pole;
public:
	void Czytaj_dane();
	void Przetworz_dane();
	void Wyswietl_wynik();
};

void Pole_prostokata::Czytaj_dane() {
	cout << "Podaj boki prostokata:\na: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
}

void Pole_prostokata::Przetworz_dane() {
	pole = a * b;
}

void Pole_prostokata::Wyswietl_wynik() {
	cout << "\nBok a: " << a;
	cout << "\nBok b: " << b;
	cout << "\nPole: " << pole <<endl;
}

int main() {
	/*T_data dataUr;
	dataUr.Pobierz_date();
	dataUr.Wypisz_date();
	*/

	T_student student1, student2;
	T_student* wsk2 = &student2;
	student1.Wypisz();
	(*wsk2).Wczytaj();
	wsk2->Wypisz();

	//Pole_prostokata pole;
	//pole.Czytaj_dane();
	//pole.Przetworz_dane();
	//pole.Wyswietl_wynik();

	return 0;
}