/*
 * main.c
 *
 *  Created on: 5 Jun 2019
 *      Author: pawel
 */

#include "main.h"
int main (void){

// print numbers
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
printf("\n\n");
printf("whileLoopTest = %d",whileLoopTest(2,9));
printf("\n\n");
whileLoopScopeOfVariables(3);
printf("\n\n");
printRemainders(-2, 4, 5);
printf("\n\n");
castingTest();
printf("\n\n");
structsTest ();
printf("\n\n");
enumtest();
return 0;
}
