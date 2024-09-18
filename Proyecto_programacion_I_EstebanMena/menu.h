#pragma once


#include <iostream>
#include <cstring>
#include <stdio.h>
#include <string>
#include "Movie.h"
#include "Room.h"

using namespace std;

void movieLoad();
void showMovie();
void movieShowName();
void movieShowInRoom(int asing);
void menuArchivo(bool*);
void menuMantenimiento();
bool profile(char*, int);