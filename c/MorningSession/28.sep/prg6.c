/*prg6
 * WAP to print the factorial of even digits in a given no.
 * i/p:5410221
 * o/p:fact. of 2 is 2
 *     fact. of 2 is 2
 *     fact. of 0 is 1
 *     fact. of 4 is 24
 */
#include<stdio.h>
void main(){
	int num;
	printf("Enter no.\n");
	scanf("%d",&num);

	int rem, n=num;
	while(n!=0){
		int f=1;
		rem=n%10;
		if(rem%2==0){
			for(int i=rem; i>=1; i--){
				f=f*i;
			}
			printf("Factorial of %d is %d\n",rem,f);
		}
		n=n/10;
	}
}
