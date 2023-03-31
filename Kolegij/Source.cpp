#include <iostream>
#include "Kolegij.h"
using namespace std;

int main() {

	//konstruktori
	Kolegij a(" SPA ");
	Kolegij b(" SPA ", " Dambic ", " Bele ", 6 );

	//PRVO SETERI,PA GETERI cout
	a.SetNazivKolegija(" SPA ");
	a.SetImeProfesora(" Dambic ");
	a.SetImeAsistenta(" Bele ");
	a.SetEcts(6);


	cout << b.GetNazivKolegija()<< endl;
	cout << b.GetImeProfesora()<< endl;
	cout << b.GetImeAsistenta()<< endl;
	cout << b.GetEcts()<< endl;

	//TESTIRANJE TO STRING

	cout << "Kolegij a: " << a.to_string()<< endl;
	cout << "Kolegij b: " << b.to_string()<< endl;

	return 0; 
}