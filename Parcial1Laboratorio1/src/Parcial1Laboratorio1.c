/*
Nombre: Genovese Gabriel Alejandro
Division: 1°E
 */

#include <stdio.h>
#include <stdlib.h>
#include "Contribuyente.h"
#include "Recaudacion.h"
#include "menus.h"

#define MAXIMO_RECAUDACIONES 50
#define MAXIMO_CONTRIBUYENTES 50

int main(void) {
	setbuf(stdout,NULL);

	eContribuyente	contribuyentes[MAXIMO_CONTRIBUYENTES];
	eRecaudacion recaudaciones[MAXIMO_RECAUDACIONES];
	int opcionPrincipal;
	int indiceLibre;
	int idContribuyente = 1000;

	inicializacionContribuyente(contribuyentes,MAXIMO_CONTRIBUYENTES);
	inicializacionRecaudacion(recaudaciones,MAXIMO_RECAUDACIONES);

	do
	{
		menu(&opcionPrincipal,"Opcion: ");
		switch(opcionPrincipal)
		{
		case 1:
			if(!buscarLibreContribuyente(contribuyentes,MAXIMO_CONTRIBUYENTES,&indiceLibre))
			{
				ingresoDatosContribuyente(contribuyentes,indiceLibre,&idContribuyente);
			}
			else
			{
				printf("No hay espacio libre para mas contribuyentes");
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		}
	}while(opcionPrincipal != 9);


	return EXIT_SUCCESS;
}
