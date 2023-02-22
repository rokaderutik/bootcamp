//carry forward 
//return leftmax array

#include <stdio.h>
//brute force
int* leftMax(int *arr, int *leftMaxArr, int N){

	for(int i=0; i<N; i++){
		int maxLeft = arr[0];
		for(int j=0; j<=i; j++){
			if(maxLeft < arr[j])
				maxLeft = arr[j];
		}
		leftMaxArr[i] = maxLeft;
	}
	return leftMaxArr;
}

//optimised
int* leftMaxOpt(int *arr, int *leftMaxArr, int N){

	leftMaxArr[0] = arr[0];
        for(int i=1; i<N; i++){
		if(arr[i] > leftMaxArr[i-1])
			leftMaxArr[i] = arr[i];
		else
			leftMaxArr[i] = leftMaxArr[i-1];
        }
        return leftMaxArr;
}

void main(){
	int arr[] = {5,2,1,-4,-2,9,3,4,7};
	int size = sizeof(arr)/sizeof(int);

	int leftMaxArr[size];
	int leftMaxArr1[size];
	leftMax(arr, leftMaxArr, size);
	leftMaxOpt(arr, leftMaxArr1, size);

	for(int i=0; i<size; i++)
		printf("%d ", arr[i]);

	printf("\n");
	for(int i=0; i<size; i++)
                printf("%d ", leftMaxArr[i]);

        printf("\n");
	for(int i=0; i<size; i++)
                printf("%d ", leftMaxArr1[i]);

        printf("\n");

}
