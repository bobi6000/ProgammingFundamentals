/*
 * main.c
 *
 *  Created on: 5 Jun 2019
 *      Author: pawel
 */

#include "main.h"
int main (void){

// prinrt numbers
numbers(2);

//power
printf("\n 3 to the power of 4 : %d ",power (3,4));
printf("\n 3 to the power of 0 : %d ",power (3,0));
printf("\n 3 to the power of -1 : %d ",power (3,-1));

//pattern of squares
patternOfsquares (10);
//inverted pattern of squares
printf("\n\n");
invertedPatternOfsquares (10);
printf("\n\n");
drawingRectangle (6, 2, 5, 1);

return 0;
}
