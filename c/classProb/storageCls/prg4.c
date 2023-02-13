#include <stdio.h>
//static storage class
//local static

void fun(){
	static int y=10;
	++y;
	printf("%d\n",y);
}
void main(){
	fun();
	fun();
	fun();
}
