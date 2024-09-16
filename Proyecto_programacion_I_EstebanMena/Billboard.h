#pragma once
#include <iostream>
#include <cstring>
#include <stdio.h>
#include <string>
#include "Movie.h"

class Billboard
{
private:

	Movie* moviesVector;
	int numberMovies;


public:
	Billboard();
	Billboard(Movie* pmoviesVector, int pnumberMovies);
	~Billboard();


	void crateDynamicVec();
	void movieLoad();
	void showMovie();
};

