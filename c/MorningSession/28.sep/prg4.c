/*prg4
 * 7 6 5 4 3 2 1
 *   5 4 3 2 1
 *     3 2 1
 *       1
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
		for(int j=2*row+1-2*i; j>=1; j--){
			printf("%d ",j);
		}
		printf("\n");
	}
}
