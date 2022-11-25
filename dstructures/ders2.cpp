#include <iostream>
using namespace std;

class ogrenci {
public:
	int ID;
	bool medeniDurum; // George BOOL, 186x
	float AGNO;
	int dogumYili;
	char isim[30];

public:
	int yasHesapla() {
		return (2022 - dogumYili);
	}
};

struct ogrenci baskan;

int main() {
	ogrenci ruhat; // nesne = OBJECT
	ogrenci eren = { 101, 0, 3.99, 1990, "Eren ARELLI" }; // declare
	ogrenci BM2[50];
	ogrenci* rania;
	rania = (ogrenci*)malloc(1 * sizeof(ogrenci)); //Dynamic Memory Management (realloc, new, free). CAST

	rania->AGNO = 3.50;
	rania->dogumYili = 2002;
	rania->ID = 501;

	BM2[36].AGNO = 1.70;
	ruhat.ID = 201;
	ruhat.dogumYili = 1998;
	baskan = eren;

	cout << rania->ID << " numarali arkadasimiz " << rania->yasHesapla() << " yasindadir.\n";

	cout << "kapasite: " << sizeof(rania);

	return 0;
}