//factorial non tail recursive

#include<stdio.h>

int fact(int n){
	if(n == 1 || n == 0)
		return 1;

	return fact(n-1) * n;
}
void main(){
	printf("fact = %d\n", fact(5));
	printf("fact = %d\n", fact(1));
	printf("fact = %d\n", fact(0));
}
