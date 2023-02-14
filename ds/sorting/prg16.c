//find middle element using quicksort
#include <stdio.h>

int mid;//global

void swap(int *ptr1, int *ptr2){
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
}

int sort(int arr[], int start, int end){
        int pivot = arr[end];
        int itr = start-1;

        for(int i=start; i<end; i++){
                if(arr[i] < pivot){
                        itr++;
                        swap(&arr[itr], &arr[i]);
                }
        }
        swap(&arr[itr+1], &arr[end]);
        return itr+1;
}

int quickSort(int *arr, int start, int end){
        if(start < end){
                int pivot = sort(arr, start, end);

		//logic
		if(pivot == mid)
			return arr[pivot];
		//

                quickSort(arr, start, pivot-1);
                quickSort(arr, pivot+1, end);
        }
	return arr[mid];
}

void main(){
        int arr[] = {5,6,8,1,-5,7,3,4,15,-5,55,9};
        int size = sizeof(arr)/sizeof(arr[0]);
 
	mid = (0 + size-1)/2;
 	for(int i=0; i<size; i++)
                printf("%d ",arr[i]);
        printf("\n");

       int mid = quickSort(arr, 0, size-1);

       for(int i=0; i<size; i++)
                printf("%d ",arr[i]);

        printf("\nMiddle Ele = %d\n", mid);
}
