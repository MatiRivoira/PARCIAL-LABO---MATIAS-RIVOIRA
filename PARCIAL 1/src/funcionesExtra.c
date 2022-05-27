/*
 * funcionesExtra.c
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

/*int initCensistas(eCensista* array){
	int retorno = -1;

	if(array != NULL){
		array[0].legajoCensista = 100;
		strcpy(array[0].nombre, "Ana");
		array[0].edad = 34;
		array[0].telefono = 1293-2345;

		array[1].legajoCensista = 101;
		strcpy(array[1].nombre, "Juan");
		array[1].edad = 24;
		array[1].telefono = 4301-54678;

		array[2].legajoCensista = 102;
		strcpy(array[2].nombre, "Sol");
		array[2].edad = 47;
		array[2].telefono = 5902-37487;

		retorno = 0;
	}

	return retorno;
} */

int initViviendas(eVivienda* array, int tam){
	int retorno = -1;
	if(array != NULL && tam > 0){
		for(int i = 0; i < tam; i++){
			array[i].idVivienda = 19999;
			array[i].isEmpty = -1;

		}
	}
	return retorno;
}

int addVivienda(eVivienda* list, int tam, char calle[], int cantidadPersonas, int cantidadHabitaciones,int tipoVivienda, int legajoCensista, int id){
	int retorno = -1;
	for(int i = 0; i < tam; i++){
		if(list[i].isEmpty == -1){
			int idAux = list[i].idVivienda + id;
			list[i].idVivienda = idAux;
			strcpy(list[i].calle, calle);
			list[i].cantidadPersonas = cantidadPersonas;
			list[i].cantidadHabitaciones = cantidadHabitaciones;
			list[i].tipoVivienda = tipoVivienda;
			list[i].legajoCensista = legajoCensista;
			list[i].isEmpty = 0;

			printf("\n el ID de la vivienda es: %d", idAux);
			retorno = 0;
			break;
		}
	}
	return retorno;
}

int findViviendaById(eVivienda* list, int tam,int id){
	int retorno = -1;
	if(list != NULL && tam > 0){
		for(int i = 0; i < tam; i++){
			if(list[i].idVivienda == id){
				retorno = i;
			}
		}
	}
	return retorno;
}

int printVivienda(eVivienda* list, int tam, int indice){
	char tipoDeVivienda[13];
	int retorno = -1;

	if(list != NULL && tam > 0 && indice >= 0){
		switch(list[indice].tipoVivienda){
			case 1:
				strcpy(tipoDeVivienda, "CASA");
				break;
			case 2:
				strcpy(tipoDeVivienda, "DEPARTAMENTO");
				break;
			case 3:
				strcpy(tipoDeVivienda, "CASILLA");
				break;
			case 4:
				strcpy(tipoDeVivienda, "RANCHO");
				break;
		}
		printf("\n---------------------------------------------------------------------------------------------------------------------------------------------------------- \n");
		printf("ID: %d | CALLE: %s | CANTIDAD DE PERSONAS: %d | CANTIDAD DE HABITACIONES: %d | TIPO DE VIVIENDA: %s | LEGAJO DEL CENSISTA: %d", list[indice].idVivienda, list[indice].calle, list[indice].cantidadPersonas, list[indice].cantidadHabitaciones,tipoDeVivienda, list[indice].legajoCensista);
		printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------");
		retorno = 0;
	}

	return retorno;
}

char deseaContinuar(){
	char respuesta;
	printf("\n¿Desea continuar?, s/n");
	fflush(stdin);
	scanf("%c", &respuesta);
	while(respuesta != 's' && respuesta != 'n'){
		printf("\n ERROR (；一_一), ¿Desea continuar?, s/n");
		fflush(stdin);
		scanf("%c", &respuesta);
	}
	return respuesta;
}

int printViviendas(eVivienda* list, int tam){
	int retorno = -1;
	char tipoDeVivienda[13];

	for(int i = 0; i < tam; i++){
		if(list[i].isEmpty != -1){
			switch(list[i].tipoVivienda){
				case 1:
					strcpy(tipoDeVivienda, "CASA");
					break;
				case 2:
					strcpy(tipoDeVivienda, "DEPARTAMENTO");
					break;
				case 3:
					strcpy(tipoDeVivienda, "CASILLA");
					break;
				case 4:
					strcpy(tipoDeVivienda, "RANCHO");
					break;
			}
			printf("\n---------------------------------------------------------------------------------------------------------------------------------------------------------- \n");
			printf("ID: %d | CALLE: %s | CANTIDAD DE PERSONAS: %d | CANTIDAD DE HABITACIONES: %d | TIPO DE VIVIENDA: %s | LEGAJO DEL CENSISTA: %d", list[i].idVivienda, list[i].calle, list[i].cantidadPersonas, list[i].cantidadHabitaciones,tipoDeVivienda, list[i].legajoCensista);
			printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------");
			retorno = 0;
		}
	}
	return retorno;
}

int listarCensistaByLegajo(eCensista* list, int tam,int legajo){
	int retorno = -1;

		for(int i = 0; i < tam; i++){
			if(list[i].legajoCensista == legajo){
				printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				printf("LEGAJO CENSISTA: %d | NOMBRE: %s | EDAD: %d | TELEFONO: %d", list[i].legajoCensista, list[i].nombre, list[i].edad, list[i].telefono);
				printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------");
				retorno = 0;
			}
		}

	return retorno;
}
