#include <stdio.h>

int *ColSum(int arr[3][3], int row, int col, int res[]){
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++)
			res[j] += arr[i][j];
	}
	return res;
}
void main(){
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};

	int res[3] = {0};

	ColSum(arr, 3, 3, res);
	for(int i=0; i<3; i++)
		printf("%d ",res[i]);

	printf("\n");
}
