#include <stdio.h>
#include "validaciones_UTN.h"

int menu(int* opcElegida, char mensaje[])
{
	int retorno = -1;

	if(opcElegida != NULL)
	{
		printf("\n1. Alta del Contribuyente\n");
		printf("2. Modificar datos del contribuyente\n");
		printf("3. Baja de contribuyente\n");
		printf("4. Recaudación\n");
		printf("5. Refinanciar Recaudación\n");
		printf("6. Saldar Recaudación\n");
		printf("7. Imprimir Contribuyentes\n");
		printf("8. Imprimir Recaudación\n");
		printf("9. Salir\n");
		validacionNumeroEntero(opcElegida,mensaje);

		retorno = 0;
	}

	return retorno;
}

int menuModificar(int* opcElegida, char mensaje[])
{
	int retorno = -1;

	if(opcElegida != NULL)
	{
		printf("\n1. Cambiar el nombre\n");
		printf("2. Cambiar el Apellido\n");
		printf("3. Cambiar el C.U.I.L.\n");
		printf("4. Salir\n");
		validacionNumeroEntero(opcElegida,mensaje);

		retorno = 0;
	}

	return retorno;
}


