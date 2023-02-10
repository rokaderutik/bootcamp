#include <stdio.h>
#include <stdbool.h>
//if more than 2 even no. then return true
//array

bool isVarified(int arr[], int size){
	static int cnt = 0;
	if(size == 0)
		return false;

	if(arr[size-1]%2 == 0)
		cnt++;

	if(cnt==2)
		return true;

	return isVarified(arr, size-1);
}

void main(){
	int arr[] = {1,2,3,4,5,6,7};

	printf("%d\n", isVarified(arr,7));
}
