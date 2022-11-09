//WAP to swap values  of two numbers using pointer

#include<stdio.h>
void main(){
	int x=10;
	int y=20;
	int *xptr=&x;
	int *yptr=&y;

	printf("Elements before swaping\n");
	printf("x=%d \ny=%d\n",*xptr,*yptr);

	int temp;
	temp=*xptr;
	*xptr=*yptr;
	*yptr=temp;
	
	printf("Elements after swaping\n");
	printf("x=%d \ny=%d\n",*xptr,*yptr);



}
