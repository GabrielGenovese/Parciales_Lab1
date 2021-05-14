#ifndef RECAUDACION_H_
#define RECAUDACION_H_

typedef struct
{
	int idContribuyente;
	int idRecaudacion;
	int mes;
	int tipo;
	int importe;
	int isEmpty;
}eRecaudacion;

int inicializacionRecaudacion(eRecaudacion recaudaciones[], int cantidadElementos);
int tituloRecaudaciones();
int imprimeTipo(int tipo);
int imprimeUnaRecaudacion(eRecaudacion recaudaciones[], int posicion);
int imprimeRecaudacionesPorIDContribuyente(eRecaudacion recaudaciones[], int cantidadElementos, int idContribuyente);
int bajaLogicaRecaudacionesPorIDContribuyente(eRecaudacion recaudaciones[], int cantidadElementos, int idContribuyente);
int buscarLibreRecaudacion(eRecaudacion recaudaciones[], int cantidadElementos, int* indice);
int ingresoDatosRecaudacion(eRecaudacion recaudaciones[],int posicion, int* idRecaudaciones, int idContribuyente);

#endif /* RECAUDACION_H_ */
