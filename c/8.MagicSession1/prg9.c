//prg9
//				1
//			1	2
//		1	2	3
//	1	2	3	4
#include<stdio.h>
void main(){
	int row;
	printf("Enter no.of rows\n");
	scanf("%d",&row);

	for(int i=0; i<=row; i++){
		int n=1;
		for(int sp=row-1; sp>=i; sp--){
			printf(" \t");
		}
		for(int j=1; j<=i; j++){
			printf("%d\t",n);
			n++;
		}
		printf("\n");
	}
}
