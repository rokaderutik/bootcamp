/*prg7
 * WAP to print minimum digit in given no.
 * i/p:942111423
 * o/p:mini. digit in 942111423 is 1
 */
#include<stdio.h>
void main(){
	int num;
	printf("Enter no.\n");
	scanf("%d",&num);

	int n1=num,min=n1%10;
	int rem,n=num;
	while(n!=0){
		rem=n%10;
		if(min>rem){
			min=rem;
		}
		n=n/10;
	}
	printf("Minimum digit in %d is %d\n",num,min);
}
