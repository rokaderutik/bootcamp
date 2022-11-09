//prg1
//WAP to see a given no. is multiple of 3

#include<stdio.h>

void main(){
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);

	if(num%3==0){
		printf("%d is multiple of 3\n");
	}else{
		printf("%d is not multiple of 3\n");
	}
}
