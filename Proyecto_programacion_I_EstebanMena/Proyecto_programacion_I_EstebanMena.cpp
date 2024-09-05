// Proyecto_programacion_I_EstebanMena.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <cstring>
#include "menu.h"

using namespace std;

int main()
{
	int opcion;
	char nameProfile[50];
	bool exit = false;

	int opcionProfile;
	printf("Bienvenido a Nueva Cinema\n\n");
	printf("Que opcion de perfil desea escoger\n");
	printf("Digite 1 para acceder como Administrador\nDigite 2 para acceder como usuario\n");
	printf("Digite su opcion:");
	scanf_s("%d", &opcionProfile);

	bool isAdmin = profile(nameProfile, opcionProfile);

	if (!isAdmin && opcionProfile == 1) {
		printf("No se pudo iniciar sesion como administrador.\n");
		return 0;
	}

	do
	{
		system("cls");
		printf("%s","Bienvenido a Nueva Cinema ", "%c",nameProfile);
		printf("Bienvenido a Nueva Cinema\n");
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
		if (isAdmin) {
			menuMantenimiento();
		}
		else {
			printf("Opcion no valida para usuario, por favor inicie como administrador.\n\n");
			system("pause");
		}
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
