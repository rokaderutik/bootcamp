//first occurance
#include <stdio.h>
int binarySearch(int arr[], int size, int key){
        int start=0, end=size-1, store=-1;

        if(arr[0] > key || arr[end] < key)
                return -1;
        if(arr[0] == key)
                return 0;

        while(start<=end){
                int mid = (start+end)/2;

                if(arr[mid] == key){
                        store = mid;
			if(arr[mid-1] != key)
				return mid;
			end = mid-1;
		}

                if(arr[mid] > key){
                        end = mid-1;
                }

                if(arr[mid] < key){
                        start = mid+1;
                }
        }
        return store;
}
void main(){
        int arr[] = {2,2,3,4,5,6,6,6,7,8,9,9};
        printf("%d\n", binarySearch(arr, 12, 6));
        printf("%d\n", binarySearch(arr, 12, 3));
	printf("%d\n%d\n",binarySearch(arr, 12, -15), binarySearch(arr, 12, 25));
}

