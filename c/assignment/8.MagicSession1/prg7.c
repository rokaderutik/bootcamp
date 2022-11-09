//prg7
//	E D C B A
//	E D C B
//	E D C
//	E D
//	E

#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		char ch='A'+row-1;
		for(int j=row; j>=i; j--){
			printf("%c\t",ch);
			ch--;
		}
		printf("\n");
	}
}
