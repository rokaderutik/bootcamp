//search floor value
#include <stdio.h>
int binarySearch(int arr[], int size, int key){
        int start=0, end=size-1, store=-1;

	if(arr[0] > key)
		return -1;
	if(arr[end] < key)
		return arr[end];

        while(start<=end){
                int mid = (start+end)/2;

                if(arr[mid] == key)
                        return arr[mid];

                if(arr[mid] > key){
                        end = mid-1;
		}
                
		if(arr[mid] < key){
			store = arr[mid];
                        start = mid+1;
		}
        }
        return store;
}
void main(){
        int arr[] = {1,3,4,6,7,9,10};
        printf("%d\n", binarySearch(arr, 7, 4));
	printf("%d\n", binarySearch(arr, 7, 8));
}
