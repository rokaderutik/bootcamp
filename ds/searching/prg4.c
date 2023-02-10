//search ceil value
#include <stdio.h>
int binarySearch(int arr[], int size, int key){
        int start=0, end=size-1, store=-1;

        if(arr[0] > key)
                return arr[0];
        if(arr[end] < key)
                return -1;

        while(start<=end){
                int mid = (start+end)/2;

                if(arr[mid] == key)
                        return arr[mid];

                if(arr[mid] > key){
                        store = arr[mid];
			end = mid-1;
                }

                if(arr[mid] < key){
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

