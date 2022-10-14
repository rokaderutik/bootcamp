/*prg2
 *				D
 *			D	c
 *		D	c	B
 *	D	c	B	a
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
		for(int j=1; j<=i; j++){
			if(j%2==0){
				printf("%c ",97+row-j);
			}else{
				printf("%c ",65+row-j);
			}
		}
		printf("\n");
	}
}
