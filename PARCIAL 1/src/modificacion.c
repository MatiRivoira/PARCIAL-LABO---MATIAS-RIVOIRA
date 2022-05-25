/*
 * modificacion.c
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

int modificarVivienda(eVivienda* list,int tam){
	int retorno = -1;
	int idModificador;
	int indice;
	int opcionElegida;

	char calleAux[TAMCALLE];
	int cantidadPersonasAux;
	int cantidadHabitacionesAux;
	int tipoViviendaAux;

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
			do{
				llenarInt(&opcionElegida, "\n▂▃▅▆█ MENU MODIFICADOR █▆▅▃▂\n 1. MODIFICAR CALLE \n 2. MODIFICAR CANTIDAD DE PERSONAS \n 3. MODIFICAR CANTIDAD DE HABITACIONES \n 4. MODIFICAR TIPO DE VIVIENDA \n 5. SALIR");
				while(opcionElegida > 5 || opcionElegida < 1){
					printf("OPCION NO VALIDA, ");
					system("pause");
					llenarInt(&opcionElegida, "\n▂▃▅▆█ MENU MODIFICADOR █▆▅▃▂\n 1. MODIFICAR CALLE \n 2. MODIFICAR CANTIDAD DE PERSONAS \n 3. MODIFICAR CANTIDAD DE HABITACIONES \n 4. MODIFICAR TIPO DE VIVIENDA \n 5. SALIR");
				}
				switch(opcionElegida){
					case 1:
						llenarString(calleAux, "\n Ingrese la nueva calle: ");
						strcpy(list[indice].calle, calleAux);
						break;
					case 2:
						llenarInt(&cantidadPersonasAux, "\n Ingrese la nueva cantidad de personas: ");
						list[indice].cantidadPersonas = cantidadPersonasAux;
						break;
					case 3:
						llenarInt(&cantidadHabitacionesAux, "\n Ingrese la nueva cantidad de habitaciones: ");
						list[indice].cantidadHabitaciones = cantidadHabitacionesAux;
						break;
					case 4:
						llenarInt(&tipoViviendaAux, "\n Ingrese el nuevo tipo de vivienda: ");
						while(tipoViviendaAux > 4 || tipoViviendaAux < 1){
							printf("OPCION NO VALIDA (¬_¬), ");
							system("pause");
							llenarInt(&tipoViviendaAux, "\nIngrese el tipo de vivienda (1.CASA – 2.DEPARTAMENTO – 3.CASILLA - 4.RANCHO): ");
						}
						list[indice].tipoVivienda = tipoViviendaAux;
						break;
				}
				retorno = 0;
			}while(opcionElegida != 5);
		}
	} else {
		printf("\nEL ID INGRESADO NO ESTA INGRESADO EN EL SISTEMA ◔̯◔ , VUELVA A INTENTARLO");
	}

	return retorno;
}
