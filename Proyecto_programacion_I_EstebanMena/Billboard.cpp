#include "Billboard.h"

Billboard::Billboard()
{
}

Billboard::Billboard(Movie* pmoviesVector, int pnumberMovies)
{

}

Billboard::~Billboard()
{
}

void Billboard::crateDynamicVec()
{
	printf("Cual es la cantidad de peiculas que desea agregar? \n");
		scanf_s("%d", &numberMovies);
		moviesVector = new Movie[numberMovies];
}

void Billboard::movieLoad()
{
	for (int i = 0; i < numberMovies; i++)
	{
		moviesVector[i] = Movie();
	}
}

void Billboard::showMovie()
{
	for (int i = 0; i < numberMovies; i++)
	{
		cout << moviesVector[i].getnameMovie() << endl;
		cout << moviesVector[i].getyearMovie() << endl;
		cout << moviesVector[i].getdurationMovie() << endl;
		cout << moviesVector[i].getcountryMovie() << endl;
		cout << moviesVector[i].getsipnosisMovie() << endl;
	}

}
