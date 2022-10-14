/*prg6
 * WAP to print sum of digits  */

#include<stdio.h>
void main(){
	int num,rem,sum=0;
	printf("Enter no.\n");
	scanf("%d",&num);

	while(num!=0){
		rem=num%10;
		sum+=rem;
		num=num/10;
	}
	printf("Sum of digits = %d\n",sum);
}
