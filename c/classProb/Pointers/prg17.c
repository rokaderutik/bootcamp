//wild & null pointer
#include<stdio.h>
void main(){
	int x=10;
	
	int *iptr;	//wild pointer
	
	int *ptr1=0;
	int *ptr2=NULL;
	printf("%p\n",ptr1);	//null pointer
	printf("%p\n",ptr2);    //null pointer
	printf("%d\n",*ptr1);    //null pointer
	printf("%d\n",*ptr2);    //null pointer

	printf("%d\n",*iptr);	//acces wild pointer
}
