/*
 * main.c
 *
 *  Created on: 5 Jun 2019
 *      Author: pawel
 */
#include <stdio.h>
int main (void){

	int N=0,i=0,x=0;

	int z=0,j=0,y=0,res=0;



	N=2;
	x=N+2;

	for (i=0;i<=N;i++){
		printf("%d \t",(x*i));
		x+=i*N;
	}
	printf("%d \t",x);

//res=y^z



	y=3;
	z=4;
	res=y;
	for(j=1;j<z-1;z++){
		res*=y;
	}
	printf("\n%d ",res);
	return 0;
}
