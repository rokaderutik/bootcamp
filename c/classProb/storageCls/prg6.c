#include <stdio.h>
//static storage class

void fun(){
	extern int x;
	++x;
	printf("%d\n",x);
}
