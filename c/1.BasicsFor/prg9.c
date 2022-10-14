//prg9
//WAP to print sum of 10 odd no.s b/w range

#include<stdio.h>

void main(){
	int num1,num2,sum=0;
	printf("Enter a start & end\n");
	scanf("%d %d",&num1,&num2);
	
	for(num1; num1<=num2; num1++){
		if(num1%2!=0){
			sum += num1;
		}
	}
	printf("Sum of odd numbers is = %d",sum);
}
