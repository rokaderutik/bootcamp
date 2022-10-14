#include<stdio.h>
void main(){
	int arr[]={10,20,30,40};

	int *ptr1=&arr[1];
	int *ptr2=&arr[3];

	//printf("%p\n",ptr1*ptr2);	
	//printf("%p\n",ptr1/ptr2);
	//printf("%p\n",ptr1%ptr2);
	printf("%p\n",ptr1+ptr2);
		
		
		
}
