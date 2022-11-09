//prg5
/*	A	B	C	D
 *	B	C	D	E
 *	C	D	E	F
 *	D	E	F	G
 */

#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	char ch1='A';
	for(int i=1; i<=row; i++){
		char ch=ch1;
		for(int j=1; j<=4; j++){
			printf("%c\t",ch);
			ch++;
		}
		printf("\n");
		ch1++;
	}
}
