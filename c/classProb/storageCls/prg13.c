#include <stdio.h>
void fun(static int x, static int y){
	int a;
	register int b=30;
	static int c=20;
	extern int d;
}
void main(){
	fun(40,50);
}
