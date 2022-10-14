//prg1
/* 4 3 2 1 
 * 5 4 3 2
 * 6 5 4 3
 * 7 6 5 4
 */

#include<stdio.h>

void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	
	int x=4,y;

	for(int i=1; i<=row; i++){
		y=x;
		for(int j=1; j<=4; j++){
			printf("%d ",y);
			y--;
		}
		printf("\n");
		x++;
	}
}
