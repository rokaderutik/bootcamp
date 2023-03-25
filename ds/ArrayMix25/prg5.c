//array rotation

#include <stdio.h>
void main(){
	int arr[] = {1,2,3,4};
	int N = sizeof(arr)/sizeof(arr[0]);

	int B = 2;

	for(int i=0; i<N; i++)
		printf("%d ", arr[i]);

	printf("\n");

	for(int i=0; i<B; i++){
		int temp = arr[N-1];
		for(int j=N-1; j>0; j--){
			arr[j] = arr[j-1];
		}
		arr[0] = temp;
	}

	for(int i=0; i<N; i++)
		printf("%d ", arr[i]);

	printf("\n");
}
