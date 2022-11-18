//sum of array element calculated in function
#include <stdio.h>
int sumArr(int *ptr, int arrSize){
	int sum=0;
	for(int i=0; i<arrSize; i++)
		sum += *(ptr + i);

	return sum;
}
void main(){
	int arr[] = {10, 20, 30, 40};
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	printf("Sum = %d\n",sumArr(arr, arrSize));
}
