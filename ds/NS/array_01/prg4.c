#include<stdio.h>
#include<stdlib.h>

int* reverseArr(int arr[], int size){
        //using calloc
	int *ptr = (int*)calloc(size, sizeof(int));

        for(int i=0, j=size-1; j>=0; i++, j--){
                *(ptr+i) = arr[j];
        }
	return ptr;
}

int* reverseArr1(int arr[], int size, int *res){

        for(int i=0, j=size-1; j>=0; i++, j--){
               
                *(res+i) = arr[j];
        }
        return res;
}

void main(){
        int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(arr)/sizeof(int);
	int res[size];	
        int *ptr = reverseArr(arr, size);
        
	for(int i=0; i<10; i++)
		printf("%d ", *(ptr+i));
	
	reverseArr1(arr, size, res);
	for(int i=0; i<10; i++)
                printf("%d ", *(res+i));


	printf("\n");
}

