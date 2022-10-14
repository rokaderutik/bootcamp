//for loop code snipest


#include<stdio.h>
void main(){

/*	for(int i=1; i<=10; i++);{	//; after for means for has no body
		printf("%d\n",i);	//error i not declared in printf
	} */

/*
	int i;                   // i global
	for(i=1; i<=10; i++);{     // for has no body
		printf("%d\n",i);      //i=11
	}
*/


	int i;
	for(i=1; i<=10; );{        // infinte loop,     no increment/decrement
		printf("%d\n",i);
	}
}
