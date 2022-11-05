//subtraction of pointers
#include<stdio.h>
void main(){
	int arr[]={1,2,3,4,5};

	int *ptr1=&(arr[0]);
	int *ptr2=&(arr[3]);

	printf("%d\n",*ptr1);
        printf("%d\n",*ptr2);

	//subtraction of pointer 
        printf("%d\n",ptr2-ptr1);
        printf("%d\n",ptr1-ptr2);
}
