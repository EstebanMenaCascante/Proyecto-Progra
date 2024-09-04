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
