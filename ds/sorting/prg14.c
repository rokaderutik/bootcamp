//use merge sort
//if array contains all consecutive elements in range b/w smallest & largest ele
#include <stdio.h>

void merge(int *, int, int, int );
int sum=0;
void mergeSort(int *arr, int start, int end){
	if(start < end){
		int mid = (start + end)/2;

		mergeSort(arr, start, mid);
		mergeSort(arr, mid+1, end);

		merge(arr, start, mid, end);
	}else{
		sum += arr[start];
	}
}

void merge(int arr[], int start, int mid, int end){
	int ele1 = mid - start + 1;
	int ele2 = end - mid;
	int arr1[ele1], arr2[ele2];

	for(int i=0; i<ele1; i++)
		arr1[i] = arr[start+i];

	for(int i=0; i<ele2; i++)
		arr2[i] = arr[mid+1+i];

	int itr1=0, itr2=0, itr3=start;
	while(itr1 < ele1 && itr2 < ele2){
		if(arr1[itr1] < arr2[itr2])
			arr[itr3++] = arr1[itr1++];
		else
			arr[itr3++] = arr2[itr2++];
	}
	while(itr1 < ele1){
		arr[itr3++] = arr1[itr1++];
	}
	while(itr2 < ele2){
		arr[itr3++] = arr2[itr2++];
	}
}

void main(){
	int arr[] = {5,6,8,9,1,3,2,7,4};
	int size = sizeof(arr)/sizeof(arr[0]);

	mergeSort(arr, 0, size-1);

	int sumT = (size*(arr[0] + arr[size-1]))/2;
	
	if(sum == sumT)
		printf("1\n");
	else
		printf("0\n");
}
