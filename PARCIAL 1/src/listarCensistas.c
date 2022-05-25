/*
 * listarCensistas.c
 *
 *  Created on: 25 may. 2022
 *      Author: Rivoira
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>
#include "UTN.h"
#include "funcionesExtra.h"

int listarCensistas(eCensista* list, int tam){
	int retorno;

	for(int i = 0; i < tam; i++){
		printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		printf("LEGAJO CENSISTA: %d | NOMBRE: %s | EDAD: %d | TELEFONO: %d", list[i].legajoCensista, list[i].nombre, list[i].edad, list[i].telefono);
		printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------");
		retorno = 0;
	}
	return retorno;
}
