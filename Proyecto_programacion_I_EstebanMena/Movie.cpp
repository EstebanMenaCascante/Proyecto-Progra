#include "Movie.h"


Movie::Movie()
{
	nameMovie = "";
	yearMovie = 0;
	durationMovie = 0;
	countryMovie = "";
	sipnosisMovie = "";
}

Movie::Movie(string pnameMovie, int pyearMovie, int pdurationMovie, string pcountryMovie, string psipnosisMovie, int pmovieID)
{
	this->nameMovie = pnameMovie;
	this->yearMovie = pyearMovie;
	this->durationMovie = pdurationMovie;
	this->countryMovie = pcountryMovie;
	this->sipnosisMovie = psipnosisMovie;
	this->movieID = pmovieID;
	
}

Movie::~Movie()
{
}

void Movie::setnameMovie(string pnameMovie)
{
	this->nameMovie = pnameMovie;
}

void Movie::setyearMovie(int pyearMovie)
{
	this->yearMovie = pyearMovie;
}

void Movie::setdurationMovie(int pdurationMovie)
{
	this->durationMovie = pdurationMovie;
}

void Movie::setcountryMovie(string pcountryMovie)
{
	this->countryMovie = pcountryMovie;
}

void Movie::setsipnosisMovie(string psipnosisMovie)
{
	this->sipnosisMovie = psipnosisMovie;
}

void Movie::setmovieID(int pmovieID)
{
	this->movieID = pmovieID;
}

string Movie::getnameMovie()
{
	return nameMovie;
}

int Movie::getyearMovie()
{
	return yearMovie;
}

int Movie::getdurationMovie()
{
	return durationMovie;
}

string Movie::getcountryMovie()
{
	return countryMovie;
}

string Movie::getsipnosisMovie()
{
	return sipnosisMovie;
}

int Movie::getmovieID()
{
	return movieID;
}
