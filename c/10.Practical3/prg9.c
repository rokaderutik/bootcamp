//code

#include<stdio.h>
void main(){
	int arr1[]={10,20,30,40,50};
	int arr2[]={70,70,80,90,100};

	int *ptr1=NULL;
	int *ptr2=NULL;

	ptr1=arr1+3;
	ptr2=arr2+2;

	*ptr1=35;

	for(int i=0; i<5; i++){
		printf("%d\t",arr1[i]);
	}
	
	printf("\n");
	for(int i=0; i<5; i++){
		printf("%d\t",arr2[i]);
	}
}
