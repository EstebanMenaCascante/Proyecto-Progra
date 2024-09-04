// Proyecto_programacion_I_EstebanMena.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include "menu.h"

using namespace std;

int main()
{
	int opcion;
	bool exit = false;
	do
	{
		printf("Bienvenido a Nueva Cinema\n\n");
		printf("Que opcion desea escoger\n");

		printf("Digite 1 para acceder a archivo:\n");
		printf("Digite 2 para acceder a mantenimiento:\n");
		printf("Digite 3 para acceder a la reserva de asientos:\n");
		printf("Digite 4 para acceder a la compra de asientos:\n");

		printf("Digite la opcion que desea escoger: ");
		scanf_s("%d", &opcion);
	switch (opcion)
	{
	case 1:	

		menuArchivo(&exit);

		break;
	case 2:

		menuMantenimiento();

		break;
	case 3:



		break;
	case 4:



		break;
	default:
		break;
	}
	
	system("cls");
	
	} while (!exit);
    
}
