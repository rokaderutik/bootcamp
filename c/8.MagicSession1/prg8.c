//prg8
//	0
//	1	1
//	2	3	5
//	8	13	21	34
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	int a=0,b=1,c=0;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=i; j++){
			printf("%d\t",c);
			a=b;
			b=c;
			c=a+b;
		}
		printf("\n");
	}
}
