//count step to reach to 0
//leetcode
//if n=even -> n=n/2
//if n=odd -> n=n-1

#include<stdio.h>

int countStep(int num){
	
	if(num == 0)
		return 0;

	if(num%2 == 0)	//even
		return 1 + countStep(num/2);
	
	return 1 + countStep(num-1);	//odd
}

void main(){

	printf("No. of step = %d\n", countStep(5));

	printf("No. of step = %d\n", countStep(14));
}
