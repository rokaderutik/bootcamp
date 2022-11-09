//prg2
//count no digits in num
#include<stdio.h>
void main(){
	int num,count=0;
	printf("Enter a number\n");
	scanf("%d",&num);

	if(num==0){
		printf("Digit count is 1\n");
	}else{
		while(num!=0){
			num=num/10;
			count++;
		}
		printf("Digit count is %d\n",count);
	}
}
