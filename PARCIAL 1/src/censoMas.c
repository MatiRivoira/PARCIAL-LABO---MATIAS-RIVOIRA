/*
 * censoMas.c
 *
 *  Created on: 27 may. 2022
 *      Author: Rivoira
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>
#include "UTN.h"
#include "funcionesExtra.h"

int censoMas(eVivienda* listViviendas, int tam, eCensista* list, int tam2){
	int retorno = -1;

	int contador1 = 0;
	int contador2 = 0;
	int contador3 = 0;

	for(int i = 0 ; i < tam; i++){
		if(listViviendas[i].isEmpty != -1){
			switch(listViviendas[i].legajoCensista){
				case 100:
					contador1++;
					break;
				case 101:
					contador2++;
					break;
				case 102:
					contador3++;
					break;
			}
		}
	}

	if(contador1 > contador2 && contador1 > contador3){
		printf("\nEL CENSISTA CON MAS CENSOS REALIZADOS ES:");
		listarCensistaByLegajo(list,tam2,100);
		printf("\nCON %d CENSOS", contador1);
	} else if(contador2 > contador1 && contador2 > contador3){
		printf("\nEL CENSISTA CON MAS CENSOS REALIZADOS ES:");
		listarCensistaByLegajo(list,tam2,101);
		printf("\nCON %d CENSOS", contador2);
	} else if(contador3 > contador1 && contador3 > contador2){
		printf("\nEL CENSISTA CON MAS CENSOS REALIZADOS ES:");
		listarCensistaByLegajo(list,tam2,102);
		printf("\nCON %d CENSOS", contador3);
	} else if(contador1 == contador2 && contador1 > contador3){
		printf("\nHAY UN EMPATE!! LOS CENSISTAS CON MAS CENSOS REALIZADOS SON:");
		listarCensistaByLegajo(list,tam2,100);
		printf("\nCON %d CENSOS", contador1);
		listarCensistaByLegajo(list,tam2,101);
		printf("\nCON %d CENSOS", contador2);
	} else if(contador2 == contador3 && contador2 > contador1){
		printf("\nHAY UN EMPATE!! LOS CENSISTAS CON MAS CENSOS REALIZADOS SON:");
		listarCensistaByLegajo(list,tam2,101);
		printf("\nCON %d CENSOS", contador2);
		listarCensistaByLegajo(list,tam2,102);
		printf("\nCON %d CENSOS", contador3);
	} else if(contador1 == contador3 && contador1 > contador2){
		printf("\nHAY UN EMPATE!! LOS CENSISTAS CON MAS CENSOS REALIZADOS SON:");
		listarCensistaByLegajo(list,tam2,100);
		printf("\nCON %d CENSOS", contador1);
		listarCensistaByLegajo(list,tam2,102);
		printf("\nCON %d CENSOS", contador3);
	} else if(contador1 == contador2 && contador1 == contador3){
		printf("\nHAY TRIPLE EMPATE!! LOS CENSISTAS CON MAS CENSOS REALIZADOS SON:");
		listarCensistaByLegajo(list,tam2,100);
		listarCensistaByLegajo(list,tam2,101);
		listarCensistaByLegajo(list,tam2,102);
		printf("\nCON %d CENSOS", contador1);
	}

	return retorno;
}
