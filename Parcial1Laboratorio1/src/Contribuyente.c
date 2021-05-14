#include <stdio.h>
#include <stdlib.h>
#include "validaciones_UTN.h"
#include "Contribuyente.h"


int inicializacionContribuyente(eContribuyente contribuyentes[], int cantidadElementos)
{
	int retorno = -1;

	if(contribuyentes != NULL && cantidadElementos > 0)
	{
		for(int i = 0; i < cantidadElementos; i++)
		{
			retorno = 0;
			contribuyentes[i].isEmpty = 1;
		}
	}


	return retorno;
}


int buscarLibreContribuyente(eContribuyente contribuyentes[], int cantidadElementos, int* indice)
{
	int retorno = -1;

	if(contribuyentes != NULL && cantidadElementos > 0 && indice != NULL)
	{
		for(int i = 0; i < cantidadElementos; i++)
		{
			if(contribuyentes[i].isEmpty)
			{
				*indice = i;
				retorno = 0;
				break;
			}
		}
	}
	return retorno;
}


int ingresoDatosContribuyente(eContribuyente contribuyentes[],int posicion, int* idContribuyente)
{
	int retorno = -1;

	if (contribuyentes != NULL && posicion > -1 && idContribuyente != NULL)
	{
		contribuyentes[posicion].idContribuyente = *idContribuyente;

		validacionStringAlpha21C(contribuyentes[posicion].nombre,"Ingrese el nombre del contribuyente: ");
		validacionStringAlpha21C(contribuyentes[posicion].apellido,"Ingrese el apellido del contribuyente: ");
		validacionNumeroEntero(&contribuyentes[posicion].cuil,"Ingrese el C.U.I.L. del contribuyente: ");

		contribuyentes[posicion].isEmpty = 0;
		*idContribuyente = *idContribuyente + 1 ;

		tituloContribuyente();
		imprimeUnContribuyente(contribuyentes,posicion);

		retorno = 0;
	}

	return retorno;
}


int tituloContribuyente()
{
	int retorno = -1;
	printf("\n%10s","ID|");
	printf("%20s","Nombre|");
	printf("%20s","Apellido|");
	printf("%10s","C.U.I.L\n|");
	retorno = 0;
	return retorno;
}


int imprimeUnContribuyente(eContribuyente contribuyente[], int posicion)
{
	int retorno = -1;

	if(contribuyente != NULL && posicion > -1)
	{
		printf("\n%10d|",contribuyente[posicion].idContribuyente);
		printf("%20s|",contribuyente[posicion].nombre);
		printf("%20s|",contribuyente[posicion].apellido);
		printf("%10d|\n",contribuyente[posicion].cuil);

		retorno = 0;
	}

	return retorno;
}

int buscarIdContribuyente(eContribuyente contribuyentes[],int cantidadElementos, int* posicionID)
{
	int retorno = -1;
	int idContribuyente;

	if(contribuyentes != NULL && posicionID != NULL)
	{
		validacionNumeroEntero(&idContribuyente,"Ingrese el n�mero de ID del contribuyente a modificar:  ");

		for(int i = 0; i < cantidadElementos; i++)
		{
			if( !contribuyentes[i].isEmpty && contribuyentes[i].idContribuyente == idContribuyente)
			{
				*posicionID = i;
				imprimeUnContribuyente(contribuyentes,i);
				retorno = 0;
				break;
			}
		}
	}

	return retorno;
}

int bajaLogicaContribuyente(eContribuyente contribuyentes[], int posicion)
{
	int retorno = -1;

	if(contribuyentes != NULL)
	{
		contribuyentes[posicion].isEmpty = 1;
		retorno = 0;
	}

	return retorno;
}

int validacionIDContribuyente(eContribuyente contribuyentes[],int cantidadElementos,int idContribuyente)
{
	int retorno = -1;

	if( contribuyentes != NULL && cantidadElementos > 0 && idContribuyente)
	{
		for(int i = 0; i < cantidadElementos; i++)
		{
			if(!contribuyentes[i].isEmpty && contribuyentes[i].idContribuyente == idContribuyente)
			{
				retorno = 0;
				break;
			}
		}
	}

	return retorno;
}
