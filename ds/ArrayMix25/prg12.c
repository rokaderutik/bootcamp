//Matrix tranpose

#include <stdio.h>
void main(){
	int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int row = sizeof(arr)/sizeof(arr[0]);
	int col = sizeof(arr[0])/sizeof(arr[0][0]);

	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++)
			printf("%d ", arr[i][j]);

		printf("\n");
	}
	printf("\n");

	int arr1[row][col];

	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++)
			arr1[i][j] = arr[j][i];
	}

	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++)
			printf("%d ", arr1[i][j]);
		printf("\n");
	}
		printf("\n");
}