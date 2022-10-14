//Passing 3-D array to function and access using 1 for loop

#include<stdio.h>
void printarr1(int (*ptr)[][2], int arrsize){	//here we get address of first element of 3D array
						//i.e. first plane startting address
	for(int i=0; i<arrsize; i++){
		printf("%d\n",*(*(*ptr)+i));
	}
}

void printarr2(int (*ptr)[][2][3], int arrsize){	//here we are getting  whole 3D array starting address
							
	for(int i=0; i<arrsize; i++){
		printf("%d\n",*(*(*(*ptr))+i));
	}
}
void main(){
	int arr[2][2][3]={1,2,3,4,5,6,7,8,9,10,11,12};
	int arrsize= sizeof(arr)/sizeof(int);
	printarr1(arr,arrsize);
	printarr2(&arr,arrsize);
}
