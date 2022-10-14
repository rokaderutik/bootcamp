//prg6
/*take input number and count number of digits in number
 * i/p:12345
 * o/p:5  */

#include<stdio.h>

void main(){
	int n,count=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	
	int temp=n;
	
	while(n!=0){
		n=n/10;
		count++;
	}
	printf("Number of digits in %d are %d",temp,count);
}
