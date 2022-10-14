//prg1
/*	1	2	3	4
 *	2	3	4	5
 *	3	4	5	6
 *	4	5	6	7
 */

#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		int n=i;
		for(int j=1; j<=4; j++){
			printf("%d\t",n);
			n++;
		}
		printf("\n");	
	}
}
