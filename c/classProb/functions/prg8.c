//default parameter does not work in c

#include <stdio.h>
void fun(int, int, int);
void main(){
	int x = 10;
	int y = 20;
	int z = 30;
	
	fun(x,y,z);
	fun(x, y);	//error: too few arguments to function
}
void fun(int x, int y, int z = 50){
	printf("Add = %d\n", x+y+z);
}
