#include<stdio.h>
void main(){
	int arr1[]={1,2,3,4};
	int arr2[]={10,20,30,40};

	int *ptr1=&(arr1[0]);
	int *ptr2=arr2;

	printf("%d\n",*(ptr1++));
	printf("%d\n",*(++ptr1));

	printf("%d\n",(*ptr2)++);
        printf("%d\n",*ptr2);

}

