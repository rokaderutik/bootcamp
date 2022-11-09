//prg10
/*	D4	C3	B2	A1
 *	D4	C3	B2	A1
 *	D4	C3	B2	A1
 */

#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int j=4; j>=1; j--){
			printf("%c%d\t",j+64,j);
		}
		printf("\n");
	}
}
