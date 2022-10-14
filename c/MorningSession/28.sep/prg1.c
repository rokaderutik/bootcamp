/*prg1
 * A A A A A A A A A
 *   B B B B B B B
 *     C C C C C
 *       D D D
 *         E
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int sp=1; sp<i; sp++){
			printf("  ");
		}
		for(int j=1; j<=2*row+1-2*i; j++){
			printf("%c ",64+i);
		}
		printf("\n");
	}
}
