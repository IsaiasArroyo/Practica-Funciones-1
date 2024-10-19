/*
 * funciones.c
 *
 *  Created on: 17 oct 2024
 *      Author: isaias arroyo
 */

#include "funciones.h"


//Function 1

uint8_t bfnToUpperCase (uint8_t bChar){

    if (bChar >= 'a' && bChar <= 'z'){
        bChar = bChar - 32;
    }
    return bChar;
}


//Function 2

uint8_t bfnToLowerCase (uint8_t bChar){

    if (bChar >= 'A' && bChar <= 'Z'){
        bChar = bChar + 32;
    }
    return bChar;
}

//Function 3

uint8_t bfnIsPrint (uint8_t bChar){

	if(bChar >= ' ' && bChar <= '~'){
		bChar = 0x1;
	}
	return bChar;
}


//Function 4

uint8_t bfnIsHex (uint8_t bChar){

	if ((bChar >= '0' && bChar <= '9') || (bChar >= 'A' && bChar <= 'F')){
		bChar = 0x1;
	}
	return bChar;
}

//Function 5

uint16_t wfnStrLen (uint8_t *bpString){

	uint16_t wlenght = 0x0;

	while (bpString[wlenght] != '\0'){
		wlenght++;
	}
	return wlenght;
}

//Function 6

uint8_t bfnShiftLeft (uint8_t bData, uint8_t bShift){

	if(bShift <= 8){
		bData = bData << bShift;
	}
	return bData;
}

//Function 7

uint8_t bfnShiftRight (uint8_t bData, uint8_t bShift){

	if(bShift <= 8){
			bData = bData >> bShift;
		}
	return bData;
}

//Function 8

void vfnMemCpy (uint8_t *bpSource, uint8_t *bpDest, uint16_t wSize){

	while (wSize !=0){
		wSize --;
		bpDest[wSize] = bpSource[wSize];
	}
}
