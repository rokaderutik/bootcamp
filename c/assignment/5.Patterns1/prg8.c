//prg8
/*	1	3	5
 *	7	9	11
 *	13	15	17
 */

#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	int n=1;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=3; j++){
			printf("%d\t",n);
			n+=2;
		}
		printf("\n");
	}
}
