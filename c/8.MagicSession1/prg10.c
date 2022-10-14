//prg10
//	D	D	D	D
//		C	C	C
//			B	B
//				A
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	char ch=64+row;
	for(int i=1; i<=row; i++){
		for(int sp=1; sp<i; sp++){
			printf(" \t");
		}
		for(int j=row; j>=i; j--){
			printf("%c\t",ch);
		}
		printf("\n");
		ch--;
	}
}
