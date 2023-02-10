#include <stdio.h>
#include <stdbool.h>

bool goodPair(int arr[], int size, int B){
	
	int i=0, j;
	int flag = 0;

	while(i != size-1){
		if(flag == 0){
			j = i+1;
			flag = 1;
		}

		if(arr[i]+arr[j] == B)
			return true;

		if(j == size-1){
			flag = 0;
			i++;
		}
		j++;
	}
	return false;
}

void main(){
	int arr[] = {1,2,3,4,5};

	int res = goodPair(arr, 5, 7);
	printf("%d\n", res);

	res = goodPair(arr, 5, 50);
	printf("%d\n", res);
}
