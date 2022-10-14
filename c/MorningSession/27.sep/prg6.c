/*prg6
 * WAP to print factorial of odd digit in given no
 * i/p:530221
 * o/p: fact of 5 is 120
 *      fact of 3 is 6
 *      fact of 1 is 1
 */
#include<stdio.h>
void main(){
	int num;
	printf("Enter a no.\n");
	scanf("%d",&num);

	int rev=0;
	while(num!=0){
		rev=rev*10 + num%10;
		num=num/10;
	}
	int rem;
	while(rev!=0){
		int f=1;
		rem=rev%10;
		if(rem%2==1){
		for(int i=rem; i>=1; i--){
			f=f*i;
		}
		printf("Factorial of %d is %d\n",rem,f);
		}
		rev=rev/10;
	}
}
