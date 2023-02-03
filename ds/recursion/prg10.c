//nth fibbonacci no.

#include<stdio.h>
int fibb(int N){
	if(N == 1 || N == 0)
		return N;

	return fibb(N-1) + fibb(N-2);
}
void main(){
	printf("Nth fibbonacci no. = %d\n", fibb(5));
}
