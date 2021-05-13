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
	int opcionSecundaria;
	int indiceLibre;
	int idContribuyente = 1000;
	int posicionID;

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
			if(!buscarIdContribuyente(contribuyentes,MAXIMO_CONTRIBUYENTES,posicionID))
			{
				do{
					menuModificar(&opcionSecundaria,"opcion: ");
					switch(opcionSecundaria)
					{
					case 1:
						validacionStringAlpha21C(contribuyentes[posicionID].nombre,"Ingrese el nuevo nombre del contribuyente: ");
						break;
					case 2:
						validacionStringAlpha21C(contribuyentes[posicionID].apellido,"Ingrese el nuevo apellido del contribuyente: ");
						break;
					case 3:
						validacionNumeroEntero(&contribuyentes[posicionID].cuil,"Ingrese nuevo el C.U.I.L. del contribuyente: ");
						break;
					case 4:
						break;
					default:
						printf("Opcion Invalida");
						break;
					}

				}while(opcionSecundaria != 4);

			}
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
		default:
			printf("Opcion Invalida");
			break;
		}
	}while(opcionPrincipal != 9);


	return EXIT_SUCCESS;
}
