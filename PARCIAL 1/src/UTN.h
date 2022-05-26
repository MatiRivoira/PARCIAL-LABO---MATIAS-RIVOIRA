/*
 * UTN.h
 *
 *  Created on: 21 abr. 2022
 *      Author: Rivoira
 */

#ifndef UTN_H_
#define UTN_H_


#endif /* UTN_H_ */

/**
 * @param ARRAY A INICIALIZAR
 * @param TAMAÑO DEL ARRAY
 * @return 0 = BIEN | -1 = NO SE PUDO EJECUTAR
 */
int inicializarArray(int array[], int tam, int inicializador);

/**
 * @param ARRAY A MOSTRAR
 * @param TAMAÑO DEL ARRAY
 * @return 0 = BIEN | -1 = NO SE PUDO EJECUTAR
 */
int mostrarArray(int array[], int tam);

/**
 *
 * @param ARRAY A MOSTRAR
 * @param TAMAÑO DEL ARRAY
 * @return 0 = BIEN | -1 = NO SE PUDO EJECUTAR
 *
 */
int mostrarParesArray(int array[], int tam);

/** \brief pide un dato y llena un string
* \param list eVivienda*
* \param texto char*
* \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok */
int llenarString(char array[], char texto[]);

/** \brief pide un dato y llena un int
* \param list eVivienda*
* \param texto char*
* \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok */
int llenarInt(int* variable, char texto[]);

/** \brief pide un dato y llena un float
* \param list eVivienda*
* \param texto char*
* \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok */
float llenarFloat(float* variable, char texto[]);

