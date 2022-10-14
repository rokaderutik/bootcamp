/*prg1
 *	2
 *	3	4
 *	4	5	6
 *	5	6	7	8
 */
#include<stdio.h>
void main(){
	int row,x;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		x=i+1;
		for(int j=1; j<=i; j++){
			printf("%d\t",x);
			x++;
		}
		printf("\n");
	}
}
