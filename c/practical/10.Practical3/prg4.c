//WAP to print array in reverse

#include<stdio.h>
void main(){
	int size;
	printf("Enter array size\n");
	scanf("%d",&size);

	printf("Enter array elements\n");
	int arr[size];
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}

	printf("Array elements in reverse order\n");
	for(int i=size-1; i>=0; i--){
		printf("%d\t",arr[i]);
	}
}
