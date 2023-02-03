#include<stdio.h>
void fun(int N){	//also try with int return type
	if(N<=1)
		return 1;

	int x = fun(N-1);
	int y = fun(N-2);
	printf("%d\n", x);
	printf("%d\n", y);
}
void main(){
	fun(4);
}
