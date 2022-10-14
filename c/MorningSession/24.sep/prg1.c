/*prg1
 *	A	B	C	D
 *		B	C	D
 *			C	D
 *				D
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. oof rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int sp=1; sp<i; sp++){
			printf(" \t");
		}
		char ch=64+i;
		for(int j=row; j>=i; j--){
			printf("%c\t",ch++);
		}
		printf("\n");
	}
}
