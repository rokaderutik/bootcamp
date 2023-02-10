//interpolation search

#include <stdio.h>
int interpolationSearch(int arr[], int size, int key){
	int start=0, end=size-1;

	if(((key-arr[start])*(end-start))%(arr[end]-arr[start])==0)
		return start + ((key-arr[start])*(end-start))/(arr[end]-arr[start]);
	else
		return -1;
}
void main(){
	int arr[] = {3,6,9,12,15,18,21,24,27,30};
	printf("%d\n", interpolationSearch(arr, 10, 21));
	printf("%d\n", interpolationSearch(arr, 10, 22));
}
