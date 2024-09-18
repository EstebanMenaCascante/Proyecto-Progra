#pragma once

#include <iostream>
#include <cstring>
#include <stdio.h>
#include <string>

using namespace std;

class Movie
{
private:
    string nameMovie;
    int yearMovie;
    int durationMovie;
    string countryMovie;
    string sipnosisMovie;
    int movieID;



public:
    Movie();
    Movie(string pnameMovie, int pyearMovie, int pdurationMovie, string pcountryMovie, string psipnosisMovie, int pmovieID);
    ~Movie();

    void setnameMovie(string pnameMovie);
    void setyearMovie(int pyearMovie);
    void setdurationMovie(int pdurationMovie);
    void setcountryMovie(string pcountryMovie);
    void setsipnosisMovie(string psipnosisMovie);
    void setmovieID(int pmovieID);


    string getnameMovie();
    int getyearMovie();
    int getdurationMovie();
    string getcountryMovie();
    string getsipnosisMovie();
    int getmovieID();
};