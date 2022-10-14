/* sum of digits*/

#include<stdio.h>

void main(){
	int n,rem,sum=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	int temp=n;
	while(n!=0){
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("Sum of digits of %d = %d",temp,sum);
}
