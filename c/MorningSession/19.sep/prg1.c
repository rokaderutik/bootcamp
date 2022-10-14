/*	1
 *	2	4
 *	3	6	9
 *	4	8	12	16
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		
		for(int j=1; j<=i; j++){
			printf("%d\t",i*j);
			
		}
		printf("\n");
	}
}
