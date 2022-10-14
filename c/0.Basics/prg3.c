//prg3

#include<stdio.h>
void main(){
	int num1,num2;
	printf("Enter number 1: ");
	scanf("%d",&num1);
	printf("Enter number 2: ");
	scanf("%d",&num2);
	if(num1>num2){
		printf("Max=%d",num1);
	}else{
		printf("Max=%d",num2);
	}
}
