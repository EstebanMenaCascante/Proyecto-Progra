#include "menu.h"
#include "Room.h"

void menuArchivo(bool *exit)
{
	int newopcion;
	do
	{

		system("cls");

		printf("Digite 1 para leer acerca de nuestro Cinema:\n");
		printf("Digite 2 para cerrar el programa:\n");
		printf("Digite 3 para volver al menu principal:\n\n");

		printf("Digite la opcion que desea escoger: ");
		scanf_s("%d", &newopcion);

		switch (newopcion)
		{
		case 1:
			do {
				system("cls");
				printf("Bienvenido a Nueva Cinema\nMi nombre es Esteban Mena Cascante\n");
				printf("Soy estudiante del curso de Programacion I\nDel profesor Hairol Romero\n\n");
				printf("Desea volver al menu principal?\nDigite 7 si es correcto:");
				scanf_s("%d", &newopcion);

			} while (newopcion!=7);
			
			break;
		case 2:

			*exit = true;
			break;

		case 3:

			printf("\nVolviendo al menu principal\n\n");
			system("pause");
			break;

		default:

			printf("Numero no valido\n\n");

			break;
		}

	} while (newopcion != 3 && !exit);

}

Room room1;
Movie* moviesVector;
int numberRooms;
int numberMovies;


void movieLoad()
{
	int ID = 0;
	for (int i = 0; i < numberMovies; i++)
	{
		string nameMovie, countryMovie, sipnosisMovie;
		int yearMovie, durationMovie;

		printf("Digite el nombre de la pelicula: ");
		cin.ignore();
		getline(cin, nameMovie);

		printf("Digite el anio de la pelicula: ");
		cin >> yearMovie;

		printf("Digite la duracion de la pelicula: ");
		cin >> durationMovie;

		printf("Digite el pais de origen de la pelicula: ");
		cin.ignore();
		getline(cin, countryMovie);

		printf("Digite la sinopsis de la pelicula: ");
		getline(cin, sipnosisMovie);

		ID++;

		moviesVector[i] = Movie(nameMovie, yearMovie, durationMovie, countryMovie, sipnosisMovie, ID);
	}
}

int movieID = 0;

void showMovie()
{
	cout << "Listado de Peliculas:\n";
	for (int i = 0; i < numberMovies; ++i) {
		cout << "ID: " << moviesVector[i].getmovieID() << endl;
		cout << "Nombre: " << moviesVector[i].getnameMovie() << endl;
		cout << "Anio: " << moviesVector[i].getyearMovie() << endl;
		cout << "Duracion: " << moviesVector[i].getdurationMovie() << " minutos" << endl;
		cout << "Pais: " << moviesVector[i].getcountryMovie() << endl;
		cout << "Sinopsis: " << moviesVector[i].getsipnosisMovie() << endl;
		cout << "----------------------------\n";
	}
	system("pause");
}

void movieShowName()
{
	for (int i = 0; i < numberMovies; ++i) 
	{
		cout << "Nombre: " << moviesVector[i].getnameMovie() << endl;
		cout << "ID: " << moviesVector[i].getmovieID() << endl;
	}
}

void movieShowInRoom(int asing)
{
		cout << "Pelicula: " << moviesVector[asing-1].getnameMovie() << endl;
		cout << "ID de la pelicula: " << moviesVector[asing-1].getmovieID() << endl;	
}

void menuMantenimiento()
{
	int newopcion;
	do
	{

		system("cls");

		printf("Digite 1 para acceder a configuracion de peliculas:\n");
		printf("Digite 2 para acceder a configuracion de salas:\n");
		printf("Digite 3 para acceder a cofiguracion de horarios:\n");
		printf("Digite 4 para volver al menu principal:\n\n");

		printf("Digite la opcion que desea escoger: ");
		scanf_s("%d", &newopcion);

		switch (newopcion)
		{
		case 1:
			

			printf("Cual es la cantidad de peiculas que desea agregar? \n");
			scanf_s("%d", &numberMovies);
			moviesVector = new Movie[numberMovies];

			movieLoad();
			showMovie();

			break;
		case 2:

			room1.menuRooms();
			
			break;

		case 3:

	
			break;
		case 4:

			printf("Volviendo al menu principal\n\n");
			system("pause");
			break;

		default:

			printf("Numero no valido\n\n");

			break;
		}

	} while (newopcion != 4);

}

bool profile(char *profileName, int profileOpcion)
{
	char password[20];
	char correctPassword[] = "lol";

	if (profileOpcion == 1) {
		printf("\nDigite su nombre de usuario: ");
		scanf_s("%s", profileName, 50);

		printf("\nDigite su contrasena de administrador: ");
		scanf_s("%s", password, sizeof(password));  

		if (strcmp(password, correctPassword) == 0) {
			return true;
		}
		else {
			printf("No se pudo iniciar sesion como administrador contrasena incorrecta.\n");
			return false;
		}
	}
	else {
		printf("\nDigite su nombre de usuario: ");
		scanf_s("%s", profileName, 50);
		return false;
	}	
}