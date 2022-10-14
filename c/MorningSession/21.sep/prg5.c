/*prg5
 *	1	4	7	10
 *	7	10	13	16
 *	13	16	19	22
 *	19	22	25	28
 */
#include<stdio.h>
void main(){
	int row,x=1;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int j=1; j<=4; j++){
			printf("%d\t",x);
			x+=3;
		}
		printf("\n");
		x-=6;
	}
}
