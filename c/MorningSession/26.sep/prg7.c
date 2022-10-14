/*prg7
 * WAP to print whether given no. is STRONG or not
 * i/p: 40585
 * o/p:yes
 * hint: sum of factorial of digits is equal to no.
 */
#include<stdio.h>
void main(){
	int num;
	printf("Enter no.\n");
	scanf("%d",&num);

	int rem,sum=0,n=num;
	while(n!=0){
		int f=1;
		rem=n%10;
		if(rem==0){
			f=1;
		}else{
			for(int i=rem; i>=1; i--){
				f=f*i;
			}
		}
		sum+=f;
		n=n/10;
	}
	if(num==sum){
		printf("%d is a STRONG no\n",num);
	}else{
		printf("%d is not STRONG no\n",num);
	}
}
