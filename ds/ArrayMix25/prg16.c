//row to col zer0

#include <stdio.h>
void main(){
	int arr1[][3] = {{1,0,3},{4,5,6},{7,8,9}};
	//int arr2[][3] = {{1,2,3},{4,5,6},{7,8,9}};

	int row = sizeof(arr1)/sizeof(arr1[0]);
	int col = sizeof(arr1[0])/sizeof(arr1[0][0]);

	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++)
			printf("%d ", arr1[i][j]);

		printf("\n");
	}
	printf("\n");

	int arrR[row], arrC[col];
	int r=0, c=0;

	for(int i=0; i<row; i++){
                for(int j=0; j<col; j++){
			if(arr1[i][j] == 0){
				arrR[r++] = i;
				arrC[c++] = j;
			}
		}
	}
	for(int i=0; i<r; i++){
                for(int j=0; j<col; j++)
			arr1[arrR[i]][j] = 0;
	}
      	for(int i=0; i<c; i++){
                for(int j=0; j<row; j++)
                        arr1[j][arrC[i]] = 0;
        }
	for(int i=0; i<row; i++){
                for(int j=0; j<col; j++)
                        printf("%d ", arr1[i][j]);

                printf("\n");
        }
        printf("\n");

}
