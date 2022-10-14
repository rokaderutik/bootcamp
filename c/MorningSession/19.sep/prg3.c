/*	a
 *	b	a
 *	c	b	a
 *	d	c	b	a
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		char ch=96+i;
		for(int j=1; j<=i; j++){
			printf("%c\t",ch);
			ch--;
		}
		printf("\n");
	}
}
