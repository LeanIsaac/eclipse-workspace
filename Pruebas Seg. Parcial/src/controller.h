/*
 * controller.h
 *
 *  Created on: 10 ago. 2022
 *      Author: equipo
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_

int controller_loadFromText(char* path, LinkedList* pArrayListParticipantes);
int controller_sort(LinkedList* pArrayListParticipantes);
int controller_List(LinkedList* pArrayListParticipantes);

#endif /* CONTROLLER_H_ */
