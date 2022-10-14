
/*min of 3 num*/

#include<stdio.h>

void main(){
	int a,b,c;
	printf("Enter a number a\n");
	scanf("%d",&a);
	
	printf("Enter a number b\n");
	scanf("%d",&b);
	
	printf("Enter a number c\n");
	scanf("%d",&c);

	if(a<b && a<c){
		printf("min is %d",a);
	}else if(b<a && b<c){
		printf("min is %d",b);
	}else if(c<a && c<b){
		printf("min is %d",c);
	}else if(a==b && a==c){
		printf("Three numers are same");
	}
}
