//prg8
/* 18 16 14
 * 12 10 8
 * 6  4  2
 */

#include<stdio.h>

void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	int x=row*3*2;		//row*col*2
	for(int i=1; i<=row; i++){
		for(int j=1; j<=3; j++){
			printf("%d\t",x);
			x-=2;
		}
		printf("\n");
	}
}
