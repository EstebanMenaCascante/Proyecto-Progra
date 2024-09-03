// Proyecto_programacion_I_EstebanMena.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include "menu.h"

using namespace std;

int main()
{
	int opcion;

	printf("Bienvenido a Nueva Cinema\n\n");
	printf("Que opcion desea escoger\n");
	printf("Digite 1 para leer acerca de nuestro Cinema:\n");
	printf("Digite 2 para acceder a mantenimiento:\n");
	printf("Digite 3 para acceder a la reserva de asientos:\n");
	printf("Digite 4 para acceder a la compra de asientos:\n");
	printf("Digite 5 para cerrar el programa:\n\n");
	printf("Digite la opcion que desea escoger: ");
	scanf_s("%d", &opcion);

	do
	{
	switch (opcion)
	{
	case 1:
		printf("Digite 1 para leer acerca de nuestro Cinema:\n");


		break;
	case 2:

		printf("Digite 4 para leer acerca de nuestro Cinema:\n");

		break;
	case 3:

		printf("Digite 6 para leer acerca de nuestro Cinema:\n");

		break;
	default:
		break;
	}
	
	
	
	} while (opcion == 5);
    
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
