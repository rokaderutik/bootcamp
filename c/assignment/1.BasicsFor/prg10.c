//prg10
//WAP to print product of first 10 numbers

#include<stdio.h>

void main(){
	int num,i;
	long long int prod=1;
	printf("Enter a start\n");
	scanf("%d",&num);
	
	for(i=1; i<=10; i++){
		prod = prod*num;
		num++;
	}
	printf("product of first 10 numbers is = %ld",prod);
}
