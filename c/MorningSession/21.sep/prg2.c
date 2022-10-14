/*prg2
 *	1
 *	1	2
 *	2	3	4
 *	4	5	6	7
 *	7	8	9	10	11
 */
#include<stdio.h>
void main(){
	int row, x=1;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int j=1; j<=i; j++){
			printf("%d\t",x);
			x++;
		}
		printf("\n");
		x--;
	}
}
