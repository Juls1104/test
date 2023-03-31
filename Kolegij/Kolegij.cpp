#include "Kolegij.h"
#include <sstream>

Kolegij::Kolegij(string nazivKolegija)
{
	this->nazivKolegija = nazivKolegija;
}

Kolegij::Kolegij(string nazivKolegija, string imeProfesora, string imeAsistenta, int ects)
{
	this->nazivKolegija = nazivKolegija;
	this->imeProfesora = imeProfesora;
	this->imeAsistenta = imeAsistenta;
	this->ects = ects;
}

string Kolegij::GetNazivKolegija()
{
	return nazivKolegija;
}

string Kolegij::GetImeProfesora()
{
	return imeProfesora;
}

string Kolegij::GetImeAsistenta()
{
	return imeAsistenta;
}

int Kolegij::GetEcts()
{
	return ects;
}

void Kolegij::SetNazivKolegija(string nazivKolegija)
{
	this->nazivKolegija = nazivKolegija;
}

void Kolegij::SetImeProfesora(string imeProfesora)
{
	this->imeProfesora = imeProfesora;

}

void Kolegij::SetImeAsistenta(string imeAsistenta)
{
	this->imeAsistenta = imeAsistenta;
}

void Kolegij::SetEcts(int ects)
{
	this->ects = ects;
}

string Kolegij::to_string()
{
	stringstream ss; // includaj sstream 

	ss << nazivKolegija << imeProfesora << imeAsistenta << ects;  // pohranjujem u ss, citam umjesto cout 

	return ss.str(); // vracam ss.str() funkciju jer pretvaram string stream u string
}
