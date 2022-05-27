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

int listarCensistas(eCensista* list, int tam, eVivienda* listViviendas, int tam2){
	int retorno;
	int censo;

	for(int i = 0; i < tam; i++){
		printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		printf("LEGAJO CENSISTA: %d | NOMBRE: %s | EDAD: %d | TELEFONO: %d", list[i].legajoCensista, list[i].nombre, list[i].edad, list[i].telefono);
		printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------");
		censo = -1;
		for(int j = 0; j < tam2; j++){
			if(listViviendas[j].legajoCensista == list[i].legajoCensista){
				printVivienda(listViviendas,tam2,j);
				censo = 0;
			}
		}
		if(censo == -1){
			printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
			printf("EL CENSISTA NO CENSO NINGUNA VIVIENDA");
			printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------");
		}
		retorno = 0;
	}

	return retorno;
}
