//kth smallest element & kth largest element
//merge sort
#include <stdio.h>

void merge(int arr[], int start, int mid, int end){
        int ele1 = mid-start+1;
        int ele2 = end-mid;

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

void mergeSort(int arr[], int start, int end){

        if(start < end){
                int mid = (start+end)/2;
		            
                mergeSort(arr, start, mid);

                mergeSort(arr, mid+1, end);

                merge(arr, start, mid, end);
        }
}

void main(){
        int arr[] = {3,2,-1,7,4,5,8};

	int size = sizeof(arr)/sizeof(arr[0]);

        for(int i=0; i<size; i++)
                printf("%d ", arr[i]);

        mergeSort(arr, 0 ,size-1);

        printf("\n");
        for(int i=0; i<size; i++)
                printf("%d ", arr[i]);

	printf("\n");
	int k;
        printf("Enter kth element\n");
        scanf("%d", &k);

	if(k<1 || k>size)
		printf("Wrong k value\n");
	else{
		printf("Kth smallest = %d\n", arr[k-1]);
		printf("Kth largest = %d\n", arr[size-k]);
	}
}
