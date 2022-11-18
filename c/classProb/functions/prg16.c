//sum of diagonal element 
//in fun1 pass 3 argument arr, row, col
//in fun2 pass 2 argument arr, arrsize

#include<stdio.h>
int sumarr1(int arr[][3], int row, int col){
	int sum=0;
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			if(i==j)
				sum += *(*(arr + i)+j);
		}
	}
	return sum;
}
int sumarr2(int (*ptr)[], int arrsize){
	int sum=0;
	for(int i=0;i <arrsize; i++){
		if(i%4==0)
			sum += *(*ptr + i);
	}
	return sum;
}
void main(){
	int arr[][3] = {1,2,3,4,5,6,7,8,9};
	int arrsize = sizeof(arr) / sizeof(int);

	printf("Sum = %d\n",sumarr1(arr, 3, 3));
	printf("Sum = %d\n", sumarr2(arr, arrsize));
}
