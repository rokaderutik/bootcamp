//sort by color
//red=0, white=1, blue=2
//sort such that same color should be in adjacent after sorting 
//sort in order :red white blue

#include <stdio.h>

void selectionSort(int arr[], int size){
	for(int i=0; i<size-1; i++){
		int minInd = i;
		for(int j=i+1; j<=size-1; j++){
			if(arr[minInd] > arr[j])
				minInd = j;
		}
		int temp = arr[i];
		arr[i] = arr[minInd];
		arr[minInd] = temp;
	}
}

void main(){
	int arr1[] = {0,1,2,0,1,2};
        int arr2[] = {0};

        selectionSort(arr1,6);
        for(int i=0; i<6; i++)
                printf("%d ", arr1[i]);

        printf("\n");
        selectionSort(arr2,1);
        for(int i=0; i<1; i++)
                printf("%d ", arr2[i]);

        printf("\n");
}
