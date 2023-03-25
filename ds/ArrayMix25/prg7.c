//column sum

#include <stdio.h>
void main(){
	int arr[][4] = {{1,2,3,4},{5,6,7,8},{9,2,3,4}};
	int row = sizeof(arr)/sizeof(arr[0]);
	int col = sizeof(arr[0])/sizeof(arr[0][0]);

	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++)
			printf("%d ", arr[i][j]);

		printf("\n");
	}
	printf("\n");

	int arrSum[4] = {0};

	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++)
			arrSum[j] += arr[i][j];
	}

	for(int i=0; i<col; i++){
		printf("%d ", arrSum[i]);
	}
		printf("\n");
}
