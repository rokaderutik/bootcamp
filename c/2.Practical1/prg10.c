/* check no is prime or not */

#include<stdio.h>

void main(){
	int num,flag=0;
	printf("Enter a number\n");
	scanf("%d",&num);
	
	if(num==1 || num==0){
		printf("%d is not prime no\n",num);
	}else{

		for(int i=2; i<num; i++){
			if(num%i==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("%d is prime number",num);
		}else{
			printf("%d is not prime number",num);
	
		}
	}
}
