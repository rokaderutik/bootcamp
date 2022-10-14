//prg7
//sum of digits
#include<stdio.h>

void main(){
	int n,rem,sum=0;
	printf("Enter a number\n");
	scanf("%d",&n);

	while(n!=0){
		rem=n%10;
		sum += rem;
		n=n/10;
	}
	printf("Sum of digits is %d",sum);
}
