//prg10
//multiplicative inverse

#include<stdio.h>

void main(){
	int start,end;
	printf("Enter start and end\n");
	scanf("%d %d",&start,&end);

	for(int i=start; i<=end; i++){
		printf("%d = %f\n",i,1/i);
	}
}
