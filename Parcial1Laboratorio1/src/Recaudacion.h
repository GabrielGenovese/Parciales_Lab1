#ifndef RECAUDACION_H_
#define RECAUDACION_H_

typedef struct
{
	int idContribuyente;
	int idRecaudacion;
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

#endif /* RECAUDACION_H_ */
