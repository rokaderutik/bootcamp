//function pointer or pointer to function

#include<stdio.h>
void add(int a, int b){
	printf("Sum = %d\n", a+b);
}

void sub(int a, int b){
	printf("Sub = %d\n", a-b);
}

void main(){
	void (*ptr)(int, int);	//function pointer decleration
	//void -> return type of function
	//(*ptr) -> pointer
	//(int, int) -> function parameter

        ptr = add;
        ptr(10, 20);

	ptr = sub;
	ptr(30, 20);

	ptr = &add;
	ptr(10,20);
/*
 also works
	ptr = add;
	*ptr(10,20);

	ptr = &sub;
	*ptr(30,20);
*/
}
