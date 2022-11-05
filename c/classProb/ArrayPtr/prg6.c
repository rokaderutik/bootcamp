//prg6
//pointer to an array
#include<stdio.h>
void main(){
	int arr1[]={10,20,30,40,50};
	int arr2[]={60,70,80,90,100};

	int *ptr1=arr2;
	int *ptr2=&arr2;

	ptr1++;
	ptr2++;

	printf("%d\n",*ptr1);	//70
	printf("%d\n",*ptr2);	//70

	int *ptr3=arr2+1;
	int *ptr4=&arr2+1;

	printf("%d\n",*ptr3);	//70
	printf("%d\n",*ptr4);	//10


}
