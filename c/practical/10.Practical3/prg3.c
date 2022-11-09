//add two arrays of same size

#include<stdio.h>
void main(){
	int size;
	printf("Enter array size\n");
	scanf("%d",&size);

	int arr1[size],arr2[size];

	printf("Enter array1 elements\n");
	for(int i=0; i<size; i++){
		scanf("%d",&arr1[i]);
	}
	
	printf("Enter array2 elements\n");
	for(int i=0; i<size; i++){
		scanf("%d",&arr2[i]);
	}

	printf("Sum of array elements\n");
	for(int i=0; i<size; i++){
		printf("%d\t",arr1[i]+arr2[i]);
	}
}
