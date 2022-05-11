/*
 * ticket.h
 *
 *  Created on: 25 abr. 2022
 *      Author: equipo
 */

#ifndef TICKET_H_
#define TICKET_H_


typedef struct{
	int codigo;
	char nombre[20];
	char apellido[20];
	int horarioSalida;
	int horarioLlegada;
	int estado;
}eTicket;


/**
 * @brief
 *
 * @param opciones
 * @return
 */
int menu( char opciones[]  );


/**
 * @brief
 *
 * @return
 */
eTicket cargarTicket(void);


/**
 * @brief
 *
 * @param unTicket
 */
void MostrarUnTicket(eTicket unTicket);


/**
 * @brief
 *
 * @param listaDeTikect
 * @param tam
 * @return
 */
int inicializarTickets(eTicket listaDeTikect[],int tam);

/**
 * @brief
 *
 * @param listarTickes
 * @param tam
 * @return
 */
int buscarEspacioLibre(eTicket listarTickes [], int tam);



/**
 * @brief
 *
 * @param listarTickes
 * @param tam
 * @return
 */
int altaTickets(eTicket listarTickes [], int tam);



/**
 * @brief
 *
 * @param listaTickets
 * @param tam
 * @param codigo
 * @return
 */
int buscarCodigo(eTicket listaTickets[], int tam, int codigo);

/**
 * @brief
 *
 * @param listaTikets
 * @param tam
 */
void mostarTickets(eTicket listaTikets[], int tam);

/**
 * @brief
 *
 * @param listarTicket
 * @param cant
 */
void bajaDeDatos(eTicket listarTicket[], int cant);


/**
 * @brief
 *
 * @param listarTickets
 * @param tam
 */
void modificarTickets(eTicket listarTickets[], int tam);


#endif /* TICKET_H_ */




