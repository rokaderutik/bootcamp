//prg8
//WAP to print table of 11 in reverse order

#include<stdio.h>

void main(){
	int num,i;
	printf("Enter a number whose table you want to print in reverse order\n");
	scanf("%d",&num);
	
	for(i=10; i>=1; i--){
		printf("%d * %d = %d\n",num,i,num*i);
	}
}
