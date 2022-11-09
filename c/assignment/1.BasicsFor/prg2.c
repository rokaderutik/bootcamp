//prg2
//print first 100 numbers from user input value

#include<stdio.h>

void main(){
	int num,i=1;
	printf("Enter a number\n");
	scanf("%d",&num);
	
	for(i; i<=100; i++){
		printf("%d\n",num);
		num++;
	}
}
