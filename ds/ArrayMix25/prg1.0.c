//count of elements

#include <stdio.h>
void main(){
	//int arr[] = {3,1,2};
	int arr[] = {5,5,3};
	int N = sizeof(arr)/sizeof(arr[0]);

	int max = arr[0];
	int cntMax = 1;

	for(int i=1; i<N; i++){
		if(arr[i] > max){
			max = arr[i];
			cntMax = 1;
		}
		if(arr[i] == max)
			cntMax++;
	}
	printf("%d\n", N-cntMax);
}
