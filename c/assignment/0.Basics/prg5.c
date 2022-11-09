//prg5

#include<stdio.h>
void main(){
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	
	if(num%5==0 && num%11==0){
		printf("%d is divisible by 5 & 11",num);
	}else{
		printf("%d is not divisible by 5 & 11",num);
	}
}
