//
#include <stdio.h>
void main(){
	fun(10);
	fun('A');
}

//warning: implicit declaration of function 'fun'
//warning: conflicting types for 'fun'
void fun(int x){		
	printf("%d\n", x);
}
