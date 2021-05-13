#ifndef RECAUDACION_H_
#define RECAUDACION_H_

typedef struct
{
	int idContribullente;
	int idRecaudacion;
	int tipo;
	int importe;
	int isEmpty;
}eRecaudacion;

int inicializacionRecaudacion(eRecaudacion recaudaciones[], int cantidadElementos);

#endif /* RECAUDACION_H_ */
