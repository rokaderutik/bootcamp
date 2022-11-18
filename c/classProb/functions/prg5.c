//passing whole array address
//pointer to an array

#include<stdio.h>
void fun1(int (*ptr)[]){
	printf("%p\n", ptr);	//address of whole 1-D array
}

void fun2(int (*ptr)[4]){
        printf("%p\n", ptr);    //address of whole 1-D array
}

void  main(){
	int arr[] = {1, 2, 3, 4};

	fun1(&arr);
	fun2(&arr);
}
