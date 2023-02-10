//binary search
#include <stdio.h>
int binarySearch(int arr[], int size, int key){
	int start=0, end=size-1;
	while(start<=end){
		int mid = (start+end)/2;

		if(arr[mid] == key)
			return mid;
		if(arr[mid] > key)
			end = mid-1;
		if(arr[mid] < key)
			start = mid+1;
	}
	return -1;
}
void main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	printf("%d\n", binarySearch(arr, 10, 9));
}
