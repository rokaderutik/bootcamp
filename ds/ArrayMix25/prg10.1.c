//minor digonal sum
//optimized

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

	int sum = 0;

	for(int i=0; i<row; i++){
		sum += arr[i][row-1-i];
	}
	printf("Sum = %d\n", sum);
}
