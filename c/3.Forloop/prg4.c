//prg4
//find sum of numbers in range which are divisible by 5
//
#include<stdio.h>
void main(){
	int start,end,sum=0;
	printf("Enter start and end\n");
	scanf("%d %d",&start,&end);

	for(start; start<=end; start++){
		if(start%5==0){
			sum=sum+start;
		}
	}
	printf("Sum of no.s divisible by 5 in range = %d\n",sum);
}
