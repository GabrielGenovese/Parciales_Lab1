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
