/*
 * algorithms.c
 *
 *  Created on: 9 Jun 2019
 *      Author: pawel
 */
#include "main.h"

void numbers (int n){

	static int i=0;
	int x=0;

	x=n+2;

	for (i=0;i<=n;i++){
		printf("%d \t",(x*i));
		x+=i*n;
	}
	printf("%d \t",x);
}

int power (int x, int y){

	static int res=0,j=0;

if (y==0)return 1;
else if (y<0){
	printf("\n POWER FUNC INFO : wrong 2nd number --> %d",y);
	return y;
}
else {
	res=x;
	for(j=0;j<y-1;j++){
		res*=x;
	}
	return res;
}
}

void patternOfsquares (int n){
	static int c=0,r=0; //c - column, r - row

	for (r=0;r<=n;r++){
		printf("\n");
		for (c=0;c<=r;c++)
			if((r+c)%3==0)printf("x");
			else printf("+");
	}
}


void invertedPatternOfsquares (int n){
	static int c=0,r=0; //c - column, r - row

	for (r=0;r<=n;r++){
		printf("\n");
		for (c=0;c<=n-r;c++)
			if((r+c)%3==0)printf("x");
			else printf("+");
	}
}

#define XMAX 10
#define YMAX 10

void drawingRectangle (int xs, int ys, int w, int h){


static int c=0,r=0; //c - column, r - row

if(xs+w>XMAX || ys+h>YMAX){printf ("\n drawingRectangle ERR: over range");}
else{
	for (c=0;c<YMAX;c++){
		printf("\n");
		for (r=0;r<YMAX;r++)
			if(r>=xs && r<(xs+w) && c>=ys && c<(ys+h))printf("x");
			else printf("o");
	}
}

}
