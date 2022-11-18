//passing arrays single element address

#include <stdio.h>

void fun(int *ptr){
	printf("%p\n", ptr);
}

void main(){
	int arr[] = {10, 20, 30, 40};
	
	fun(arr);
	fun(&arr[0]);
}
