/*
 * arrayPassenger.h
 *
 *  Created on: 27 jun. 2022
 *      Author: equipo
 */

#ifndef ARRAYPASSENGER_H_
#define ARRAYPASSENGER_H_

#define MAX_CHAR 51


typedef struct{
	int id;
	char name[MAX_CHAR];
	char lastName[MAX_CHAR];
	float price;
	char flycode[10];
	int typePassenger;
	int statusFlight;
	int isEmpty;
}ePassenger;

typedef struct{
	int typePassenger;
	char descrpicion[MAX_CHAR];
}eTypePassenger;

typedef struct{
	int idFlyCode;
	char flyCode[10];
}eFlyCode;




/** @brief To indicate that all position in the array are empty,
* this function put the flag (isEmpty) in TRUE in all
* position of the array
* @param list Passenger* Pointer to array of passenger
* @param len int Array length
* @return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*
*/
int initPassengers(ePassenger* list,int len);

/**
 * @brief add in a existing list of passengers the values received as parameters
 * 		  in the first empty position
 *
 * @param list passenger*
 * @param len int
 * @param id int
 * @param name[] char
 * @param lastName[] char
 * @param price float
 * @param typePassenger int
 * @param flycode[] char
 * @return int Return (-1) if Error [Invalid length or NULL pointer or without
 *		   free space] - (0) if Ok
 */
int addPassenger(ePassenger* list, int len, int id, char name[], char lastName[],float price,int typePassenger, char flyCode[]);



/**
 * @brief find a Passenger by Id en returns the index position in array.
 *
 * @param list Passenger*
 * @param len int
 * @param id int
 * @return
 */
int findPassengerById(ePassenger* list, int len,int id);

/**
 * @brief Remove a Passenger by Id (put isEmpty Flag in 1)
 *
 * @param list Passenger*
 * @param len int
 * @param id int
 * @return int Return (-1) if Error [Invalid length or NULL pointer or if can't
 *  find a passenger] - (0) if Ok
 */
int removePassenger(ePassenger* list, int len, int id);


/**
 * @brief Sort the elements in the array of passengers, the argument order
 *        indicate UP or DOWN order
 *
 * @param list Passenger*
 * @param len int
 * @param order int [1] indicate UP - [0] indicate DOWN
 * @return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 */
int sortPassengers(ePassenger* list, int len, int order);

/**
 * @brief print the content of passengers array
 *
 * @param list Passenger*
 * @param length int
 * @return int
 */
int printPassenger(ePassenger* list, int length);

/**
 * @brief  Sort the elements in the array of passengers, the argument order
 *         indicate UP or DOWN order
 *
 * @param list Passenger*
 * @param len int
 * @param order int [1] indicate UP - [0] indicate DOWN
 * @return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 */
int sortPassengersByCode(ePassenger* list, int len, int order);


/**
 * @brief
 *
 * @param lista
 * @param len
 * @return
 */
int buscarEspacioLibre(ePassenger lista [], int len);


int alta(ePassenger* lista, int len);

void cargaDeDatos(ePassenger* lista, int len, int *ID);

void mostrarTipoPasajero(eTypePassenger list[], int tam);

void mostrarCodigoVuelo(eFlyCode list[], int tam);

void listar(ePassenger* lista, int len);





#endif /* ARRAYPASSENGER_H_ */
