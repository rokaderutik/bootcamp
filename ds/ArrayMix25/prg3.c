//reverse in range

#include <stdio.h>
void main(){
	int arr[] = {1,2,3,4};
	int N = sizeof(arr)/sizeof(arr[0]);

	int B = 2;
	int C = 3;

	for(int i=0; i<N; i++)
		printf("%d ", arr[i]);

	printf("\n");
	for(int i=B, j=C; i<j; i++, j--){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	for(int i=0; i<N; i++)
		printf("%d ", arr[i]);

	printf("\n");
}
