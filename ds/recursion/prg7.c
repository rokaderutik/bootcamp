#include<stdio.h>

int sumN(int n){
	if(n == 1)
		return n;

	return sumN(n-1) + n;
}
void main(){
	
	printf("sum = %d\n", sumN(5));
	printf("sum = %d\n", sumN(1));

}
