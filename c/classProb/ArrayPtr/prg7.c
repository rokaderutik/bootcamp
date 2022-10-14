//prg7
//2-D array
#include<stdio.h>
void main(){
	int arr1[][4]={{1,2,3,4},{5,6,7},{8,9}};
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	int arr2[][3]={1,2,3,{4,5,6}};


}
