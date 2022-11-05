#include<stdio.h>
void main(){
	int arr[]={1,2,3,4,5};

	int *ptr=arr;

	printf("%d\n",*ptr);
	
	ptr++;
	*ptr=70;
	
	ptr++;
	(*ptr)++;

	for(int i=0; i<5; i++){
		printf("%d\n",arr[i]);
	}
}
