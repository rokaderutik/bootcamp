//prg9
/* 0	3	8
 * 15	24	35
 * 48	63	80
 */

#include<stdio.h>

void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	int d=3,x=0;

	for(int i=1; i<=row; i++){
		for(int j=1; j<=3; j++){
			printf("%d\t", x);
			x=x+d;
			d=d+2;
		}
		printf("\n");
	}
}
