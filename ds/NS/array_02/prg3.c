#include <stdio.h>

int mainDigSum(int arr[3][3], int row, int col){
	int sum=0;
	for(int i=0; i<row*col; i=i+row+1){
		sum += *(*arr + i);
	}
	return sum;
}
void main(){
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};

	printf("%d\n",mainDigSum(arr,3,3));
}
