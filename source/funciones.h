/*
 * funciones.h
 *
 *  Created on: 17 oct 2024
 *      Author: isaia
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#include "board.h"


uint8_t bfnToUpperCase (uint8_t bChar);
uint8_t bfnToLowerCase (uint8_t bChar);
uint8_t bfnIsPrint (uint8_t bChar);
uint8_t bfnIsHex (uint8_t bChar);
uint16_t wfnStrLen (uint8_t *bpString);
uint8_t bfnShiftLeft (uint8_t bData, uint8_t bShift);
uint8_t bfnShiftRight (uint8_t bData, uint8_t bShift);
void vfnMemCpy (uint8_t *bpSource, uint8_t *bpDest, uint16_t wSize);

#endif /* FUNCIONES_H_ */
