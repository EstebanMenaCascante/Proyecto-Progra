#include "Movie.h"

Movie::Movie()
{
	printf("Digite el nombre de la pelicula: \n");
		scanf_s("%s", &nameMovie);
		printf("Digite el anio de la pelicula: \n");
		scanf_s("%d", &yearMovie);
		printf("Digite la duracion de la pelicula: \n");
		scanf_s("%d", &durationMovie);
		printf("Digite el pais de procedencia de la pelicula: \n");
		scanf_s("%s", &countryMovie);
		printf("Digite la sipnosis de la pelicula: \n");
		scanf_s("%s", &sipnosisMovie);

}

Movie::Movie(string pnameMovie, int pyearMovie, int pdurationMovie, string pcountryMovie, string psipnosisMovie)
{
	this->nameMovie = pnameMovie;
	this->yearMovie = pyearMovie;
	this->durationMovie = pdurationMovie;
	this->countryMovie = pcountryMovie;
	this->sipnosisMovie = psipnosisMovie;

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
