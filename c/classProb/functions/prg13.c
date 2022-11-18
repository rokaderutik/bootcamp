//passing array to function
#include <stdio.h>

void printEle(int ele){
	printf("%d\n", ele);
}
void main(){
	int arr[] = {10, 20, 30, 40};
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	for(int i = 0; i < arrSize; i++){
		printEle(arr[i]);
	}
}
