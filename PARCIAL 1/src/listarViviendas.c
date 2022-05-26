/*
 * listarViviendas.c
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


int listarViviendas(eVivienda* list, int tam){
	int retorno = -1;
	int valor;
	eVivienda listAux;

	for(int i = 0 ; i < tam; i++){
		for(int j = i+1; j < tam ;j++){
			if(list[j].isEmpty != -1){
				valor = strcmp(list[i].calle, list[j].calle);
				if(valor != 1){
					if(list[i].cantidadPersonas > list[j].cantidadPersonas){
						valor = 1;
					}
				}
				if(valor == 1){
					valor = 0;
					listAux = list[i];
					list[i] = list[j];
					list[j] = listAux;

					j = i+1;
				}
			}
		}
	}

	printViviendas(list,tam);

	return retorno;
}
