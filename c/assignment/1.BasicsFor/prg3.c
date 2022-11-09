//prg3
//WAP to print first ten ,3 digit no.

#include<stdio.h>

void main(){
	int num,i=1;
	printf("Enter a 3 digit number\n");
	scanf("%d",&num);
	
	for(i; i<=10; i++){
		printf("%d\n",num);
		num++;
	}
}
