#include<stdio.h>
void antiDig(int arr[4][4], int row, int col, int res[4][4]){
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			if(i+j >=row)
				res[i+j][row-1-j] = arr[i][j];
			else
				res[i+j][i] = arr[i][j];
		}
	}
}

void main(){
        int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int res[7][4] = {0};

	for(int i=0; i<4; i++){
                for(int j=0; j<4; j++)
                        printf("%d\t",arr[i][j]);

                printf("\n");
        }

        antiDig(arr, 4, 4,res);
        for(int i=0; i<7; i++){
                for(int j=0; j<4; j++)
                        printf("%d\t",res[i][j]);

                printf("\n");
        }
} 
