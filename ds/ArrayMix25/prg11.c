//Anti digonal sum

#include <stdio.h>
void main(){
	int N = 3;
	int arr[3][3] = {{1,2,3},
			{4,5,6},
			{7,8,9}};

	int arr1[4][4] = {{1,2,3,4},
			 {5,6,7,8},
			 {9,10,11,12},
			 {13,14,15,16}};

	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++)
			printf("%d\t", arr[i][j]);

		printf("\n");
	}
	printf("\n");

	int arrRes[2*N - 1][N];
	for(int i=0; i<2*N-1; i++){
                for(int j=0; j<N; j++)
                	arrRes[i][j] = 0;
        }

	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			if(i+j < N)
				arrRes[i+j][i] = arr[i][j];
			else{
				arrRes[i+j][] = arr[i][j];
			}
		}
	}
	
	for(int i=0; i<2*N-1; i++){
                for(int j=0; j<N; j++)
                        printf("%d  ", arrRes[i][j]);

                printf("\n");
        }
        printf("\n");

}
