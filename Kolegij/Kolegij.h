#pragma once
#include <string>

using namespace std;
class Kolegij
{
private: // sve varijable
	string nazivKolegija, imeProfesora, imeAsistenta;
	int ects;


public: // sve metode - kontruktori, getteri,setteri , to string

	Kolegij (string nazivKolegija);
	Kolegij(string nazivKolegija, string imeProfesora, string imeAsistenta, int ects);

	string GetNazivKolegija();
	string GetImeProfesora();
	string GetImeAsistenta();
	int GetEcts();

	void SetNazivKolegija(string nazivKolegija);
	void SetImeProfesora(string imeProfesora);
	void SetImeAsistenta(string imeAsistenta);
	void SetEcts(int ects);

	string to_string();

};

