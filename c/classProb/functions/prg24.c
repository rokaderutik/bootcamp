//returning multiple values form function

#include <stdio.h>
void fun(int x, int y, int *ptradd, int *ptrsub){
	*ptradd = x + y;
	*ptrsub = x - y;
}

void main(){
	int x = 10;
	int y = 20;

	int add; 
	int sub;

	fun(10,20,&add,&sub);

	printf("%d\n",add);
	printf("%d\n",sub);
}
