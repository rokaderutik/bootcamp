//passing double pointer to function

#include<stdio.h>
void fun(int **ptr){
	printf("%d\n", **ptr);
}
void main(){
	int x = 10;
	
	int *ptr1 = &x;	//single pointer
	int **ptr2 = &ptr1;	//double pointer

	fun(ptr2);	//passing double pointer
	fun(&ptr1);	//passing address of single pointer
}
