#include<stdio.h>

void* malloc(size_t size);	//malloc declaration
void fun(){
	int x=10;
	int *ptr = (int *)malloc(sizeof(int));

	*ptr = 50;
	printf("%d\n", *ptr);
}
void main(){
	fun();
}
