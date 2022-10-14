//Accessing 2D array using onee for loop:

#include<stdio.h>
void printarr1(int (*ptr)[], int arrsize){  //here we are getting address of whole first 1D array
	for(int i=0; i<arrsize; i++){
		printf("%d\n",*(*ptr+i));
	}
}
void printarr2(int (*ptr)[][3], int arrsize){ //here we are getting address of whole 2D array
	for(int i=0; i<arrsize; i++){
		printf("%d\n",*(**ptr+i));
	}
}
void main(){
	int arr[][3]={1,2,3,4,5,6,7,8,9};
	int arrsize=sizeof(arr)/sizeof(int);

	printarr1(arr, arrsize);
	printarr2(&arr, arrsize);
}
