//prg7
//WAP to print table of 12

#include<stdio.h>

void main(){
	int num,i;
	printf("Enter a number whose table you want to print\n");
	scanf("%d",&num);
	
	for(i=1; i<=10; i++){
		printf("%d * %d = %d\n",num,i,num*i);
	}
}
