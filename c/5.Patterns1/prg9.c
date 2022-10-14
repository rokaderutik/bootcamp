//prg9
/*	2	5	10
 *	17	26	37
 *	50	65	82
 */

#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	
	int n=2,inc=3;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=3; j++){
			printf("%d\t",n);
			n=n+inc;
			inc+=2;
		}
		printf("\n");
	}
}
