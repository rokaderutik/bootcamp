/*WAP to print fibbonacci series upto given no */

#include<stdio.h>
void main(){
	int num;
	printf("Enter no.\n");
	scanf("%d",&num);

	int a=0,b=1,c=0;
	while(c<=num){
		printf("%d\t",c);
		a=b;
		b=c;
		c=a+b;
	}
}
