/*prg1
 * 	1
 * 	3	5
 * 	7	9	11
 * 	13	15	17	19
 */
#include<stdio.h>
void main(){
	int row,x=1;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int j=1; j<=i; j++){
			printf("%d\t",x);
			x+=2;
		}
		printf("\n");
	}
}
