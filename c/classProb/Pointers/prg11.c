
#include<stdio.h>
void main(){
	int arr[]={10,20,30,40};

	int *ptr=arr;

	printf("%d\n",*ptr);
	printf("%d\n",*(ptr+1));
	printf("%d\n",*(ptr+2));
	printf("%d\n",*(ptr+3));

}
