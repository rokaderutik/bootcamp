//prg4
/*	A	B	C
 *	D	E	F
 *	G	H	I
 */

#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	
	char ch='A';
	for(int i=1; i<=row; i++){
		for(int j=1; j<=3; j++){
			printf("%c\t",ch);
			ch++;
		}
		printf("\n");
	}
}
