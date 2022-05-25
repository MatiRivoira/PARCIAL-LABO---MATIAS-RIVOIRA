/*
 ============================================================================
 Name        : PARCIAL.c
 Author      : MATIAS RIVOIRA
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>
#include "UTN.h"
#include "funcionesExtra.h"

#include "alta.h"
#include "modificacion.h"
#include "baja.h"
#include "listarViviendas.h"
#include "lsitarCensistas.h"

#define TAMCENSISTAS 3
#define TAMVIVIENDAS 200

int main(void) {
	setbuf(stdout, NULL);

	int opcionElegida;
	int viviendasCargadas = 0;
	int idAux = 0;

	eCensista listaCensistas[TAMCENSISTAS] = {{100, "Ana", 34, 12032345},{101, "Juan", 24, 430154678},{102, "Sol", 47, 590237487}};
	eVivienda listaViviendas[TAMVIVIENDAS];

	initViviendas(listaViviendas, TAMVIVIENDAS);

	do{
		llenarInt(&opcionElegida, "\n▂▃▅▆█ MENU PRINCIPAL █▆▅▃▂ \n 1. ALTA VIVIENDA \n 2. MODIFICAR VIVIENDA \n 3. BAJA VIVIENDA \n 4. LISTAR VIVIENDAS \n 5. LISTAR CENCISTAS \n 6. SALIR");
		while(opcionElegida > 6 || opcionElegida < 1){
			printf("OPCION NO VALIDA, ");
			system("pause");
			llenarInt(&opcionElegida, "\n▂▃▅▆█ MENU PRINCIPAL █▆▅▃▂\n 1. ALTA VIVIENDA \n 2. MODIFICAR VIVIENDA \n 3. BAJA VIVIENDA \n 4. LISTAR VIVIENDAS \n 5. LISTAR CENCISTAS \n 6. SALIR");
		}
		switch(opcionElegida){
			case 1:
				altaVivienda(listaViviendas, TAMVIVIENDAS, &idAux);
				viviendasCargadas++;
				break;
			case 2:
				if(viviendasCargadas > 0){
					modificarVivienda(listaViviendas, TAMVIVIENDAS);
				} else {
					printf("\nERROR, PRIMERO CARGUE UNA VIVIENDA ¯_(ツ)_/¯ ");
					system("pause");
				}
				break;
			case 3:
				if(viviendasCargadas > 0){
					bajarVivienda(listaViviendas, TAMVIVIENDAS);
					viviendasCargadas--;
				}
				break;
			case 4:
				if(viviendasCargadas > 0){
					listarViviendas(listaViviendas, TAMVIVIENDAS);
				}
				break;
			case 5:
				listarCensistas(listaCensistas, TAMCENSISTAS);
				break;
		}
	}while(opcionElegida != 6);

	return EXIT_SUCCESS;
}
