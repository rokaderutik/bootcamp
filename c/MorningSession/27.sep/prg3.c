/*prg3
 * 	   1
 * 	 3 2 1
 *     5 4 3 2 1
 *   7 6 5 4 3 2 1
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter a no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int sp=1; sp<=row-i; sp++){
			printf("  ");
		}
		for(int j=2*i-1; j>=1; j--){
			printf("%d ",j);
		}
		printf("\n");
	}
}
