//prg3
/*	1	1	1	1
 *	2	2	2	2
 *	3	3	3	3
 *	4	4	4	4
 */

#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int j=1; j<=4; j++){
			printf("%d\t",i);
		}
		printf("\n");
	}
}
