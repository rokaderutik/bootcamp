//prg3
/* WAP to print divisor of number, count of divisor ,addition of divisor */

#include<stdio.h>

void main(){
	int n, count=0, sum=0;
	printf("Enter a number\n");
	scanf("%d",&n);

	printf("The divisors are ");

	for(int i=1; i<=n; i++){
		if(n%i==0){
			printf("%d\t",i);
			count++;
			sum += i;
		}
	}
	printf("\nThe count of divisors is %d\n",count);
	printf("Addition of divisors is %d",sum);
}
