//carry forward 
//return righttmax array

#include <stdio.h>

int* rightMax(int *arr, int *rightMaxArr, int N){

        rightMaxArr[N-1] = arr[N-1];
        for(int i=N-2; i>=0; i--){
                if(arr[i] > rightMaxArr[i+1])
                        rightMaxArr[i] = arr[i];
                else
                        rightMaxArr[i] = rightMaxArr[i+1];
        }
        return rightMaxArr;
}

void main(){
        int arr[] = {5,2,1,-4,-2,9,3,4,7};
        int size = sizeof(arr)/sizeof(int);

        int rightMaxArr[size];
	rightMax(arr, rightMaxArr, size);

        for(int i=0; i<size; i++)
                printf("%d ", arr[i]);

        printf("\n");
        for(int i=0; i<size; i++)
                printf("%d ", rightMaxArr[i]);

        printf("\n");
}


