//prg10
//fibonacii series
#include<stdio.h>

void main(){
	int a=0,b=1,c,num;
	printf("Enter a number\n");
	scanf("%d",&num);
	
	printf("%d %d ",a,b);
	while((a+b)<=num){
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
}
