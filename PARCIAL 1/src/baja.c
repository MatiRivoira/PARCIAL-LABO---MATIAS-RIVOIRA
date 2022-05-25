/*
 * baja.c
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

int bajarVivienda(eVivienda* list,int tam){
	int retorno = -1;

	int idModificador;
	int indice;

	llenarInt(&idModificador, "Ingrese el id de la vivienda a modificar: ");
	while(idModificador < 20000){
		printf("ID NO VALIDO ب(ﾉ◕╭╮◕), ");
		system("pause");
		llenarInt(&idModificador, "Ingrese el id de la vivienda a modificar: ");
	}
	indice = findViviendaById(list, tam, idModificador);
	if(indice >= 0){
		printVivienda(list,tam,indice);
		int respuesta = deseaContinuar();
		if(respuesta == 's'){
			list[indice].idVivienda = 19999;
			list[indice].idVivienda = -1;
		}
	} else {
		printf("\nEL ID INGRESADO NO ESTA INGRESADO EN EL SISTEMA ◔̯◔ , VUELVA A INTENTARLO");
	}

	return retorno;
}
