#define TEXTO 21

#ifndef CONTRIBUYENTE_H_
#define CONTRIBUYENTE_H_

typedef struct
{
	int idContribuyente;

	char nombre[TEXTO];
	char apellido[TEXTO];
	int cuil;

	int isEmpty;
}eContribuyente;

int inicializacionContribuyente(eContribuyente alumno[], int cantidadElementos);
int buscarLibreContribuyente(eContribuyente contribuyentes[], int cantidadElementos, int* indice);
int ingresoDatosContribuyente(eContribuyente contribuyentes[],int posicion, int* idContribuyente);

#endif /* CONTRIBUYENTE_H_ */
