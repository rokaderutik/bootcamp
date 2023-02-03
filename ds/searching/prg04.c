#include<stdio.h>

int singleOccur(int arr[], int size){
	int start = 0, end = size-1;

	while(start <= end){
		int mid = (start + end)/2;

		if(arr[mid] != arr[mid+1] && arr[mid] != arr[mid-1])
			return arr[mid];

		if(mid%2 == 0 && arr[mid] != arr[mid-1])
			start = mid+1;

		if(mid%2 == 0 && arr[mid] == arr[mid-1])
			end = mid-1;

		if(mid%2 == 1 && arr[mid] != arr[mid-1])
			end = mid-1;

		if(mid%2 == 1 && arr[mid] == arr[mid-1])
			start = mid+1;

	}
	return 0;
}

void main(){
	int arr[] = {1,1,2,2,3,3,4,4,5,6,6};
	int arr1[] = {1,1,2,3,3,4,4,5,5,6,6};
	int arr2[] = {1,1,2,2,3,4,4,5,5,6,6};

	printf("%d\n", singleOccur(arr, 11));
	printf("%d\n", singleOccur(arr1, 11));
	printf("%d\n", singleOccur(arr2, 11));
}
