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
int tituloContribuyente();
int imprimeUnContribuyente(eContribuyente contribuyente[], int posicion);
int buscarIdContribuyente(eContribuyente contribuyentes[],int cantidadElementos, int* posicionID);
int bajaLogicaContribuyente(eContribuyente contribuyentes[], int posicion);


#endif /* CONTRIBUYENTE_H_ */
