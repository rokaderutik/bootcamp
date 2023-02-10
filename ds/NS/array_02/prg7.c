#include<stdio.h>

void rotate(int arr[5][5], int row, int col){
	int temp;

	for(int i=0; i<row/2; i++){
		
		for(int j=i; j<col-2*i-1; j++){
			
			temp = arr[i][j];
			arr[i][j] = arr[row-1-j][i];
			arr[row-1-j][i] = arr[row-1][row-1-j];
			arr[row-1][row-1-j] = arr[j][row-1];
			arr[j][row-1] = temp;
		}
	}
}
void main(){
	int arr[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
	for(int i=0; i<5; i++){
                for(int j=0; j<5; j++)
                        printf("%d\t",arr[i][j]);

                printf("\n");
        }

	printf("\n");
	rotate(arr, 5, 5);	//{7,4,1,8,5,2,9,6,3}
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++)
			printf("%d\t",arr[i][j]);

		printf("\n");
	}
}
