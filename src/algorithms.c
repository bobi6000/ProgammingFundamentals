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


void castingTest(void){
	int nHrs = 40;
	int nDays = 7;

	float avgIntValue = nHrs/nDays;
	float avgFloatValue = nHrs/(float)nDays;

	printf("%d hours in %d days\n", nHrs, nDays);
	printf("work %.1f (int avg) %.1f (float avg) hours per day \n",avgIntValue,avgFloatValue );
}


struct rect_t {
	int left;
	int bottom;
	int right;
	int top;
};

typedef struct rect2nd_tag {
	int left;
	int bottom;
	int right;
	int top;
}rect2nd_t;

typedef struct {
	int left;
	int bottom;
	int right;
	int top;
}rect3rd_t;

typedef struct rect_t rect_tag;

void structsTest (void){

	struct rect_t myRect1;
	rect_tag myRect2;
	rect2nd_t myRect3;
	rect3rd_t myRect4;

	myRect1.left=-4;
	myRect1.bottom=1;
	myRect1.right=8;
	myRect1.top=6;

	myRect2.left=-4;
	myRect2.bottom=1;
	myRect2.right=8;
	myRect2.top=6;

	myRect3.left=-4;
	myRect3.bottom=1;
	myRect3.right=8;
	myRect3.top=6;

	myRect4.left=-4;
	myRect4.bottom=1;
	myRect4.right=8;
	myRect4.top=6;
	printf("Different structures:\t Left top corner \n");
	printf("option 1  - (%d,%d)\t",myRect1.left,myRect1.top );
	printf("option 2  - (%d,%d)\t",myRect2.left,myRect2.top );
	printf("option 3  - (%d,%d)\t",myRect3.left,myRect3.top );
	printf("option 4  - (%d,%d)\t",myRect4.left,myRect4.top );
}


enum months_t {JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNY, JULY, AUGUST, SEMPTEMBER, OCTOBER, NONEMBER, DECEMBER};


void printMonth(enum months_t m){

	printf ("Now is %d. month of year\n",m+1);
}


void enumtest(void){

	printMonth(JANUARY);
}

int max (int a, int b){
 int res;
	if (a>=b)res=a;
	else if (a<b)res=b;

 return res;
}

int min (int a, int b){
 int res;
	if (a<=b)res= a;
	else if (a>b)res= b;

 return res;
}


rect3rd_t firstRectangle, secondRectangle;
/
rect3rd_t intersectionOfRectangles(rect3rd_t *r1,rect3rd_t r2){

	rect3rd_t r1Ar2;


	r1Ar2.left=max(9,8);
//	r1Ar2.bottom =  max(r1->bottom,r2->bottom);
//	r1Ar2.right = min(*r1->right,*r2->right);
//	r1Ar2.top = min(*r1->top,*r2->top);

	return r1Ar2;

}

