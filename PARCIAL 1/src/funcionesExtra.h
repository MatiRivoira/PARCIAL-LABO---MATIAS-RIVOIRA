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

int initCensistas(eCensista* array);
int initViviendas(eVivienda* array, int tam);

int addVivienda(eVivienda* list, int tam, char calle[], int cantidadPersonas, int cantidadHabitaciones,int tipoVivienda, int legajoCensista, int id);
int findViviendaById(eVivienda* list, int tam,int id);
int printVivienda(eVivienda* list, int tam, int indice);
int printViviendas(eVivienda* list, int tam);

char deseaContinuar();
