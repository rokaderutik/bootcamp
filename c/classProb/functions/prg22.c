//returning array from function

#include <stdio.h>
int * fun(){
	int arr[] = {10,20,30};
	return arr;	//warning: returning address of local variable
}
void main(){
	int *ptr = fun();
	printf("%d\n",*ptr);	//garbage or segmentation
}
