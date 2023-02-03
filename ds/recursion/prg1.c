#include<stdio.h>

void sumN(int N){
	static int sum = 0;
	if(N > 0){
		sum += N;
		printf("%d\n", N);
		sumN(--N);
	}
	printf("%d\n", sum);
}
void main(){
	sumN(10);
}
