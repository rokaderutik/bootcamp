/*  1 3 5
 *  7 9
 *  11
 */

#include<stdio.h>
void main(){
	int row,n=1;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int j=row; j>=i; j--){
			printf("%d\t",n);
			n+=2;
		}
		printf("\n");
	}
}
