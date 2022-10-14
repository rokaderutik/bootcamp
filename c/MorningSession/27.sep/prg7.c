/*prg7
 * WAP to print whether given no is amstrong or not
 * i/p:371
 * o/p:371 is an amstrong no
 *Amstrong no is equal to sum of digits to power total no count
 eg. 371
 count =3  3^3 + 7^3 + 1^3 ==371
 */
#include<stdio.h>
void main(){
	int num;
	printf("Enter a no.\n");
	scanf("%d",&num);

	int n=num,n1=num;
	int cnt=0;
	while(n!=0){
		cnt++;
		n=n/10;
	}
	int rem,sum=0;
	while(n1!=0){
		int f=1;
		rem=n1%10;
		for(int i=1; i<=cnt; i++){
			f=f*rem;
		}
		sum+=f;
		n1=n1/10;
	}
	if(sum==num){
		printf("%d is AMSTRONG no.\n",num);
	}else{
		printf("%d is not AMSTRONG no.\n",num);
	}
}
