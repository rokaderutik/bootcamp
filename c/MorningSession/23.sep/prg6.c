/*prg6
 *WAP to count no. of digits in no. */

#include<stdio.h>
void main(){
	int num;
	printf("Enter a no.\n");
	scanf("%d",&num);
	if(num==0)
		printf("No. of digit = 1\n");
	int count=0;
	while(num!=0){
		count++;
		num=num/10;
	}
	printf("No. of digits = %d\n",count);
}
