//prg3
/* 4 4 4 4
 * 3 3 3 3
 * 2 2 2 2
 * 1 1 1 1
 */

#include<stdio.h>

void main(){
	int row,x;
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	
	x=row;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=4; j++){
			printf("%d ",x);
		}
		printf("\n");
		x--;
	}
}
