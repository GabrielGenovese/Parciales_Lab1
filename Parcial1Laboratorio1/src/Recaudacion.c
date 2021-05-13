#include <stdio.h>
#include <stdlib.h>

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
		case 1:
			printf("%20s","ARBA");
			break;
		case 2:
			printf("%20s","IIBB");
			break;
		case 3:
			printf("%20s","GANANCIAS");
			break;
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
		printf("%20s|",recaudaciones[posicion].idRecaudacion);
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


