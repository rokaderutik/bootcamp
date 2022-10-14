/*prg7
 *WAP to print reverse of no. */

#include<stdio.h>
void main(){
	int num;
	printf("Enter no.\n");
	scanf("%d",&num);

	while(num!=0){
		
		printf("%d",num%10);
		num=num/10;
	}
}
