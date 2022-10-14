/* take 10 numbers as input and compute sum and avg */

#include<stdio.h>

void main(){
	int num,sum=0;
	for(int i=1; i<=10; i++){
		printf("Enter a number %d\n",i);
		scanf("%d",&num);
		sum += num;
	}
	printf("Sum = %d",sum);
	printf("Avg = %d",sum/10);
}
