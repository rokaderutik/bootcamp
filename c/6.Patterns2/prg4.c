//prg4
/* I H G
 * F E D
 * C B A
 */

#include<stdio.h>

void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	char ch='A'+row*3-1;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=3; j++){
			printf("%c ",ch);
			ch--;
		}
		printf("\n");
	}
}
