/* take 3 numbers and check whether it is pythgorous triplet or not */

#include<stdio.h>

void main(){
	int a,b,c;
	printf("Enter number 1\n");
	scanf("%d",&a);
	
	printf("Enter number 2\n");
	scanf("%d",&b);

	printf("Enter number 3\n");
	scanf("%d",&c);

	if((a*a + b*b)== c*c){
		printf("It is pythagourous triplet");
	}else if((a*a + c*c)== b*b){
		printf("It is pythagourous triplet");
	}else if((b*b + c*c)== a*a){
		printf("It is pythagourous triplet");
	}else{
		printf("It is not pythagourous triplet");
	}


}
