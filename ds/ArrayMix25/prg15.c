//add 2 Matrix

#include <stdio.h>
void main(){
	int arr1[][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int arr2[][3] = {{1,2,3},{4,5,6},{7,8,9}};

	int row = sizeof(arr1)/sizeof(arr1[0]);
	int col = sizeof(arr1[0])/sizeof(arr1[0][0]);

	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++)
			printf("%d ", arr1[i][j]);

		printf("\n");
	}
	printf("\n");
	
	for(int i=0; i<row; i++){
                for(int j=0; j<col; j++)
                        printf("%d ", arr2[i][j]);

                printf("\n");
        }
        printf("\n");
	
	int arr3[row][col];
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			arr3[i][j] = arr1[i][j]+arr2[i][j];
			printf("%d\t", arr3[i][j]);
		}
		printf("\n");
	}
}
