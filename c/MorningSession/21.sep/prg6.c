/*prg6
 *WAP to print factorial of given no	*/

#include<stdio.h>
void main(){
	int num;
	long int fact;
	printf("Enter a given no.\n");
	scanf("%d",&num);

	if(num<0){
		printf("Factorial does not exist\n");
	}else if(num==0){
		printf("Factorial of 0!=1\n");
	}else{
		fact=1;
		for(int i=num; i>=1; i--){
			fact=fact*i;
		}
		printf("Factorial of %d!=%ld",num,fact);
	}
}
