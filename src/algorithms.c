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

int whileLoopTest (int a, int b){
	int total=0;
	while (a<b){
		total+=a;
		printf("a=%d b=%d total=%d\n",a,b,total);
		a++;
		b--;
	}
	return total;
}

void whileLoopScopeOfVariables (int b){
	int total=0;
	{
	int i=0;
	while (i<b){
		total+=b*i;
		printf("i=%d total=%d\n",i,total);
		i++;
	}
	}

	{
	int i=0;
	while(i<5){
		printf("i=%d 2nd loop \n",i);
		i++;
	}
	}
}


void printRemainders(int lo, int hi, int n){

	int i = lo,j=0;

	while (i< hi){
		printf("-->cycle of loop: %d \n",j++);
		if (i==0){
			printf ("Cannot divide by 0 \n");
			i++;
			continue;
		}
		printf("%d mod %d = %d \n",n,i,n%i);
		i++;
	}
}
