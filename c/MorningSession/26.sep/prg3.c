/*prg3
 *	   1
 *	  121
 *	 12345
 *	1234567
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	
	for(int i=1; i<=row; i++){
		for(int sp=1; sp<=row-i; sp++){
			printf("  ");
		}
		for(int j=1; j<=2*i-1; j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}
