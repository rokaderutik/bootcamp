//recursion in character array
#include<stdio.h>
#include<stdbool.h>

bool searchEle(char arr[], int size, char ele){
	if(size == 0)
		return false;
	if(arr[size-1] == ele)
		return true;

	return searchEle(arr, size-1, ele);
}

void main(){
	char arr[] = {'A', 'B', 'C', 'D', 'E'};
	int size = sizeof(arr)/sizeof(char);

	bool b = searchEle(arr, size, 'D');
	if(b == 1)
		printf("Found\n");
	else
		printf("Not found\n");
}
