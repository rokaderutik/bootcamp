/*prg4
 *			1
 *		      321
 *		    54321
 *		  7654321
 *		987654321
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int sp=1; sp<=row*2 - 2*i; sp++){
			printf("   ");
		}
		for(int j=2*i-1; j>=1; j--){
			printf("%d  ",j);
		}
		printf("\n");
	}
}
