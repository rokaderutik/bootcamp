//reverse no.

#include<stdio.h>

int reverseNo(int num){

	if(num <= 9)
		return num;

	return 10*((num%10)*10 + reverseNo(num/10));
}

void main(){

	printf("Reverse No. = %d\n", reverseNo(1234));
}
