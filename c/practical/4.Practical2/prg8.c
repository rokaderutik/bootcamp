//prg8
//product of digits
#include<stdio.h>

void main(){
	int n,rem,prod=1;
	printf("Enter a number\n");
	scanf("%d",&n);

	while(n!=0){
		rem=n%10;
		prod *= rem;
		n=n/10;
	}
	printf("Product of digits is %d",prod);
}
