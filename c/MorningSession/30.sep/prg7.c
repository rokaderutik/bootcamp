/*prg7
 */
#include<stdio.h>
void main(){
	int num; 
	printf("Enter no.\n");
	scanf("%d",&num);

	int max=0,min=9;
	int n=num,rem;
	while(n!=0){
		rem=n%10;
		if(min>rem){
			min=rem;
		}
		if(max<rem){
			max=rem;
		}
		n=n/10;
	}
	printf("%d is maximum digit in %d\n",max,num);
	printf("%d is minimum digit in %d\n",min,num);
}
