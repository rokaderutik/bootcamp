/*prg2
 * 18	16	14
 * 12	10	8
 * 6	4	2
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	int x=row*row*2;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=row; j++){
			printf("%d\t",x);
			x-=2;
		}
		printf("\n");
	}
}
