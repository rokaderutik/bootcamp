/*prg6
 * WAP to print sum of even digits of no.  
 * i/p: 942111
 * o/p:sum=6
 */

#include<stdio.h>
void main(){
	int num;
	printf("Enter no.\n");
	scanf("%d",&num);

	int rem,sum=0;
	while(num!=0){
		rem=num%10;
		if(rem%2==0){
			sum += rem;
		}
		num=num/10;
	}
	printf("sum of even digits = %d\n",sum);
}
