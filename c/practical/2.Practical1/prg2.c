/*max of 3 num*/

#include<stdio.h>

void main(){
	int a,b,c,max;
	printf("Enter a number a\n");
	scanf("%d",&a);
	
	printf("Enter a number b\n");
	scanf("%d",&b);
	
	printf("Enter a number c\n");
	scanf("%d",&c);

	if(a>b && a>c){
		printf("max is %d",a);
	}else if(b>a && b>c){
		printf("max is %d",b);
	}else if(c>a && c>b){
		printf("max is %d",c);
	}else if(a==b && a==c){
		printf("Three numers are same");
	}
}
