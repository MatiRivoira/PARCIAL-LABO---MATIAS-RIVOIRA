/*
 * funcionesExtra.h
 *
 *  Created on: 24 may. 2022
 *      Author: Rivoira
 */

#ifndef FUNCIONESEXTRA_H_
#define FUNCIONESEXTRA_H_

#define TAMCALLE 50

#define TAMNOMBRE 50

struct{
	int legajoCensista;
	char nombre[TAMNOMBRE];
	int edad;
	int telefono;
}typedef eCensista;

struct{
	int idVivienda;
	char calle[TAMCALLE];
	int cantidadPersonas;
	int cantidadHabitaciones;
	int tipoVivienda;
	int legajoCensista;
	int isEmpty;
}typedef eVivienda;

#endif /* FUNCIONESEXTRA_H_ */

/** \brief iunicializa una estructura array de viviendas
* \param list eVivienda*
* \param tam int
* \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok */
int initViviendas(eVivienda* array, int tam);

/** \brief agrega una vivienda
* \param list eVivienda*
* \param tam int
* \param calle char*
* \param cantidadDePersonas int
* \param cantidadHabitaciones int
* \param tipoVivienda int
* \param legajoCensista int
* \param id int
* \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok */
int addVivienda(eVivienda* list, int tam, char calle[], int cantidadPersonas, int cantidadHabitaciones,int tipoVivienda, int legajoCensista, int id);

/** \brief busca una vivienda por id
* \param list eVivienda*
* \param tam int
* \param id int
* \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok */
int findViviendaById(eVivienda* list, int tam,int id);

/** \brief printe 1 vivienda
* \param list eVivienda*
* \param tam int
* \param indice int
* \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok */
int printVivienda(eVivienda* list, int tam, int indice);

/** \brief printe todas las viviendas cargadas en un array
* \param list eVivienda*
* \param tam int
* \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok */
int printViviendas(eVivienda* list, int tam);

/** \brief pregunta si se desea seguir
* \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok */
char deseaContinuar();
