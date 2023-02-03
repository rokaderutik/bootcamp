#include<stdio.h>

int fun(int N){
	if(N <= 1)
		return 1;

	return N + fun(N-1) + fun(N-2);
}
void main(){
	printf("%d\n", fun(4));
}
