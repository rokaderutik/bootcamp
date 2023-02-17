#include <stdio.h>
#include <stdlib.h>

int a=10;
void fun(int x){
	int y=20;
	printf("%d\t%d\n", x, y);
}
void gun(){
	char *str = "core2web";
	printf("%s\n", str);
}
void main(){
	int b=20;
	fun(10);
	gun();
}
