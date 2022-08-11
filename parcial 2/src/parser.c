/*
 * parser.c
 *
 *  Created on: 29 jun. 2022
 *      Author: equipo
 */

#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "UTN.h"
#include "computer.h"

/** \brief Parsea los datos los datos de los pasajeros desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayList LinkedList*
 * \return int
 *
 */
int parser_PassengerFromText(FILE* pFile , LinkedList* pArrayList)
{
	int retorno=0;

	char id[100];
	char name[100];
	char lastname[100];
	char price[100];
	char flycode[100];
	char typePassenger[100];
	char statusFlight[100];

	int cantidad=0;

	eComputer* computer = NULL;

	if(pFile != NULL && pArrayList != NULL){
		retorno=1;

		cantidad = fscanf(pFile, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n",id,name,lastname,price,flycode,typePassenger,statusFlight);

		while(feof(pFile)==0)
		{
			fscanf(pFile, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n",id,name,lastname,price,flycode,typePassenger,statusFlight);

			if(cantidad == 7)
			{
				computer = //Passenger_newParametros(id, name, lastname, price, flycode, typePassenger, statusFlight);

				ll_add(pArrayList, computer);
			}
		}
	}

    return retorno;
}
