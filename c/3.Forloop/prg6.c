//prg6
//factorial of no

#include<stdio.h>

void main(){
	int n,f=1,flag=0;
	printf("Enter a no\n");
	scanf("%d",&n);
	if(n==0){
		printf("Factorial = 1\n");
	}
	if(n<0){
		printf("Factorial not possible\n");
	}
	for(int i=n; i>=1; i--){
		f=f*i;
		flag=1;
	}
	if(flag==1){
		printf("Factorial = %d\n",f);
	}
}
