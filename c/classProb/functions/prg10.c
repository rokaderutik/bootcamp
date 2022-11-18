//call by address
#include <stdio.h>

void callByAdd(int *);	//declaration
void main(){
	int x = 10;
	printf("X = %d\n", x);	//10
	printf("%p\n", &x);	//0x100
	callByAdd(&x);	//call

	printf("X = %d\n", x);	//50
}
//body
void callByAdd(int *ptr){
	printf("%p\n", ptr);	//0x100
	printf("X = %d\n", *ptr);	//10

	*ptr = 50;

	printf("X = %d\n", *ptr);	//50
}
