/*
 * funciones.c
 *
 *  Created on: 17 oct 2024
 *      Author: isaias arroyo
 */

#include "funciones.h"


//Function 1

uint8_t bfnToUpperCase (uint8_t bChar){

    if (bChar >= 'a' && bChar <= 'z'){  //Verifica que bChar se encuentre entre a y z
        bChar = bChar - 32; //Modifica el valor de bChar restandole para convertirlo en mayuscula
     }
    return bChar;
}


//Function 2

uint8_t bfnToLowerCase (uint8_t bChar){

    if (bChar >= 'A' && bChar <= 'Z'){  //Verifica que bChar se encuentre entre A y Z
        bChar = bChar + 32;  //Modifica el valor de bChar sumandole para convertirlo en minuscula
    }
    return bChar;
}

//Function 3

uint8_t bfnIsPrint (uint8_t bChar){

	if(bChar >= ' ' && bChar <= '~'){ //Verifica que bChar se encuentre entre caracteres imprimibles 
		bChar = 0x1; //Modifica el valor de bChar por un 1
	}
	return bChar;
}


//Function 4

uint8_t bfnIsHex (uint8_t bChar){

	if ((bChar >= '0' && bChar <= '9') || (bChar >= 'A' && bChar <= 'F')){ //Verifica que bChar se encuentre entre 0 y 9  entre A y Z
		bChar = 0x1; //Modifica el valor de bChar por un 1
	}
	return bChar;
}

//Function 5

uint16_t wfnStrLen (uint8_t *bpString){

	uint16_t wlenght = 0x0; //Se declara wlenght como contador

	while (bpString[wlenght] != '\0'){ //Recorre el string hasta llegar al valor null
		wlenght++; //Aumenta el valor de wlenght
	}
	return wlenght;
}

//Function 6

uint8_t bfnShiftLeft (uint8_t bData, uint8_t bShift){

	if(bShift <= 8){ //Verifica que bShift no sea mayor a 8
		bData = bData << bShift; //Hace el corrimiento a la izquierda de bData
	}
	return bData;
}

//Function 7

uint8_t bfnShiftRight (uint8_t bData, uint8_t bShift){

	if(bShift <= 8){//Verifica que bShift no sea mayor a 8
			bData = bData >> bShift;//Hace el corrimiento a la derecha de bData
		}
	return bData;
}

//Function 8

void vfnMemCpy (uint8_t *bpSource, uint8_t *bpDest, uint16_t wSize){

	while (wSize !=0){ //Mantiene el while hasta que wSize llegue a 0
		wSize --; //Le resta 1 al valor wSize
		bpDest[wSize] = bpSource[wSize]; //Copia los datos de bpSource a bpDest de acuerdo al valor de wSize
	}
}
