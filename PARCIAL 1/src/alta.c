/*
 * alta.c
 *
 *  Created on: 24 may. 2022
 *      Author: Rivoira
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>
#include "UTN.h"
#include "funcionesExtra.h"

int altaVivienda(eVivienda* list,int tam,int* idAux){
	char calleAux[TAMCALLE];
	int cantidadPersonasAux;
	int cantidadHabitacionesAux;
	int tipoViviendaAux;
	int legajoCensistaAux;
	int id;

	llenarString(calleAux, "\nIngrese la calle: ");
	llenarInt(&cantidadPersonasAux, "\nIngrese la cantidad de personas: ");
	llenarInt(&cantidadHabitacionesAux, "\nIngrese la cantidad de habitaciones: ");
	llenarInt(&tipoViviendaAux, "\nIngrese el tipo de vivienda (1.CASA – 2.DEPARTAMENTO – 3.CASILLA - 4.RANCHO): ");
	while(tipoViviendaAux > 4 || tipoViviendaAux < 1){
		printf("OPCION NO VALIDA (¬_¬), ");
		system("pause");
		llenarInt(&tipoViviendaAux, "\nIngrese el tipo de vivienda (1.CASA – 2.DEPARTAMENTO – 3.CASILLA - 4.RANCHO): ");
	}
	llenarInt(&legajoCensistaAux, "\nIngrese el legajo del censista: ");
	while(legajoCensistaAux < 100 || legajoCensistaAux > 102){
		printf("EL CENSISTA NO EXISTE ಠ╭╮ಠ, ");
		system("pause");
		llenarInt(&legajoCensistaAux, "\nIngrese el legajo del censista: ");
	}
	*idAux = *idAux + 1;
	id = *idAux;
	addVivienda(list, tam, calleAux, cantidadPersonasAux, cantidadHabitacionesAux, tipoViviendaAux, legajoCensistaAux, id);

	return 0;
}
