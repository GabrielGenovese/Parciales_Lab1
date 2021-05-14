#include <stdio.h>
#include <stdlib.h>
#include "Recaudacion.h"
#include "validaciones_UTN.h"

int inicializacionRecaudacion(eRecaudacion recaudaciones[], int cantidadElementos)
{
	int retorno = -1;

	if(recaudaciones != NULL && cantidadElementos > 0)
	{
		for(int i = 0; i < cantidadElementos; i++)
		{
			retorno = 0;
			recaudaciones[i].isEmpty = 1;
		}
	}


	return retorno;
}


int tituloRecaudaciones()
{
	int retorno = -1;
	printf("\n%10s|","ID Contribuyente");
	printf("%10s|","ID Recaudacion");
	printf("%20s|","Tipo");
	printf("%10s|","Importe\n");
	return retorno;
}

int imprimeTipo(int tipo)
{
	int retorno = -1;
	if(tipo == 1 || tipo == 2 || tipo == 3)
	{
		switch(tipo)
		{
		case 1:
			printf("%20s","ARBA");
			break;
		case 2:
			printf("%20s","IIBB");
			break;
		case 3:
			printf("%20s","GANANCIAS");
			break;
		}
		retorno = 0;

	}
	return retorno;
}

int imprimeUnaRecaudacion(eRecaudacion recaudaciones[], int posicion)
{
	int retorno = -1;

	if(recaudaciones != NULL && posicion > -1)
	{
		printf("\n%10d|",recaudaciones[posicion].idContribuyente);
		printf("%10d|",recaudaciones[posicion].idRecaudacion);
		printf("\n%10d|",recaudaciones[posicion].mes);
		imprimeTipo(recaudaciones[posicion].tipo);
		printf("%10d|\n",recaudaciones[posicion].importe);

		retorno = 0;
	}

	return retorno;
}

int imprimeRecaudacionesPorIDContribuyente(eRecaudacion recaudaciones[], int cantidadElementos, int idContribuyente)
{
	int retorno = -1;
	if(recaudaciones != NULL && cantidadElementos > 0 && idContribuyente >999)
	{
		tituloRecaudaciones();
		for(int i = 0; i < cantidadElementos ; i++)
		{
			if(recaudaciones[i].idContribuyente == idContribuyente && !recaudaciones[i].isEmpty)
			{
				imprimeUnaRecaudacion(recaudaciones,i);
			}
		}
		retorno = 0;
	}
	return retorno;
}

int bajaLogicaRecaudacionesPorIDContribuyente(eRecaudacion recaudaciones[], int cantidadElementos, int idContribuyente)
{
	int retorno = -1;

	if(recaudaciones != NULL && cantidadElementos > 0 && idContribuyente >999)
	{
		for(int i = 0; i < cantidadElementos; i++)
		{
			if(recaudaciones[i].idContribuyente == idContribuyente && !recaudaciones[i].isEmpty)
			{
				recaudaciones[i].isEmpty = 1;
			}
		}
		retorno = 0;
	}

	return retorno;
}


int buscarLibreRecaudacion(eRecaudacion recaudaciones[], int cantidadElementos, int* indice)
{
	int retorno = -1;

	if(recaudaciones != NULL && cantidadElementos > 0 && indice != NULL)
	{
		for(int i = 0; i < cantidadElementos; i++)
		{
			if(recaudaciones[i].isEmpty)
			{
				*indice = i;
				retorno = 0;
				break;
			}
		}
	}
	return retorno;
}

int ingresoDatosRecaudacion(eRecaudacion recaudaciones[],int posicion, int* idRecaudaciones, int idContribuyente)
{
	int retorno = -1;

	if (recaudaciones != NULL && posicion > -1 && idRecaudaciones != NULL && idContribuyente > 1000)
	{
		recaudaciones[posicion].idRecaudacion = *idRecaudaciones;
		recaudaciones[posicion].idContribuyente = idContribuyente;
		validacionNumeroEnteroConMinMax(&recaudaciones[posicion].mes,1,12,"Ingrese el mes (1-12): ");
		validacionNumeroEnteroConMinMax(&recaudaciones[posicion].tipo,1,3,"Ingrese el tipo de Recaudacion (1 si es de tipo ARBA, 2 si es de tipo IIBB o 3 si es de tipo GANANCIA): ");
		validacionNumeroEnteroConMinMax(&recaudaciones[posicion].importe,-1,100000,"Ingrese el importe de la Recaudacion:  " );

		recaudaciones[posicion].isEmpty = 0;
		*idRecaudaciones = *idRecaudaciones + 1 ;




		retorno = 0;
	}

	return retorno;
}
