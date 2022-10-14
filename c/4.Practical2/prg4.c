//prg4
/*WAP to take input & check whether it is prime or not */

#include<stdio.h>

void main(){
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	int flag=0;

	for(int i=2; i<n; i++){
		if(n%i==0){
			flag=1;
			break;		
		}
	}
	if(flag==1)
		printf("%d is not a prime number",n);
	else
		printf("%d is a prime number",n);
}

