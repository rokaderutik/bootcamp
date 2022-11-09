/*WAP to take i/p from user range & do the sum of
 all numbers in range except divisible by 3 */

#include<stdio.h>

void main(){
	int n,sum=0;
	printf("Enter a number\n");
	scanf("%d",&n);

	for(int i=1; i<=n; i++){
		if(i%3!=0){
			sum=sum+i;
		}
	}
	printf("Sum = %d",sum);
}
