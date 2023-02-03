//count zero in no.

#include<stdio.h>

int countZero(long long int num){
	
	if(num == 0)
		return 1;

	if(num <= 9)
		return 0;

	if(num%10 == 0)
		return 1 + countZero(num/10);
	return countZero(num/10);
}

void main(){
	long long int num;
	printf("No. of zero in num = %d\n", countZero(10005000100));
}
