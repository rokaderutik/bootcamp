//Amicale no
//eg: 1184 & 1210
//  :220 & 284  As sum of all divisors of 220 = 284 &
//                       -||-             284 = 220
#include<stdio.h>
int allDivisors(int n){
	int sum=0;
	for(int i=1; i<=n/2; i++){
		if(n%i==0)
			sum+=i;
	}
	return sum;
}
void main(){
	int n1,n2,sum1,sum2;
	printf("Enter numbers \n");
	scanf("%d%d",&n1,&n2);

	sum1=allDivisors(n1);
	sum2=allDivisors(n2);
	
	if(sum1==n2 && sum2==n1){
		printf("%d and %d are Amicable no.s\n",n1,n2);
	}else{
		printf("%d and %d are Not Amicable no.s\n",n1,n2);		
	}
}
