//pointer to an array
#include<stdio.h>
void main(){
	int arr[]={1,2,3,4,5};

	int *ptr1=arr;

	int *ptr2=&arr;

	int *ptr3=&arr[2];

	int (*ptr4)[5]=&arr;

	printf("%d\n",*ptr1);
	printf("%d\n",*ptr2);
	printf("%d\n",*ptr3);
	printf("%d\n",*(*ptr4+2));

}
