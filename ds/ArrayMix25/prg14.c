//Matrix  are equal

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

	int flag = 0;
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++)
			if(arr1[i][j] != arr2[i][j]){
				flag = 1;
				break;
			}
	}
	if(flag == 0)
		printf("Metrices are equal\n");
	else
		printf("Not equal\n");
}
