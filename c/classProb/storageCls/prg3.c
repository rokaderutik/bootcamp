#include <stdio.h>
//static storage class

int y=10;
void fun(){
	
	++y;
	printf("%d\n",y);
}
void main(){
	fun();
	fun();
	fun();
}
