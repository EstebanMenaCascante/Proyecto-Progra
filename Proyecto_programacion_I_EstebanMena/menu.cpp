#include "menu.h"

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



			break;
		case 2:

			
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
/*
bool profile(char *profileName, int profileOpcion)
{
	string pasword = NULL;

	if (profileOpcion == 1)
	{
		printf("Digite su nombre de usuario: ");
		scanf_s("%c", &profileName);
		//*profileName;
		printf("\nDigite su contrasena de administrador:");
		scanf_s("%d", &pasword);
		if (pasword=="agente007")
		{
		return true;
		}
	}
	else {
		printf("Digite su nombre de usuario: ");
		scanf_s("%c", &profileName);
		return false;
	}
	
}
*/
