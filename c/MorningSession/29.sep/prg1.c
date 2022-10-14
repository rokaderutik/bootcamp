/*prg1
 * 0 0 0 0 0
 *   1 2 3 4
 *     4 6 8
 *       9 12
 *         16
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	
	int x=0;
	for(int i=1; i<=row; i++){
		for(int sp=1; sp<i; sp++){
			printf("   ");
		}
		for(int j=1; j<=row+1-i; j++){
			printf("%d  ",(x+j-1)*(i-1));
		}
		printf("\n");
		x++;
	}
}
