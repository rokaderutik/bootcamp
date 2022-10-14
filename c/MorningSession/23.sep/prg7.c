/*prg7
 WAP to print Whether NUMBER is PERFECT or not */

#include<stdio.h>
void main(){
	int num;
	printf("Enter a no.\n");
	scanf("%d",&num);
	
	int sum=0;
	for(int i=1; i<=num/2; i++){
		if(num%i==0){
			sum+=i;
		}
	}
	if(num==sum){
		printf("%d is PERFECT no.\n",num);
	}else{
		printf("%d is not PERFECT no.\n",num);
	}
}
