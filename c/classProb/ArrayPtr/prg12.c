#include<stdio.h>
void main(){
	int arr[]={1,2,3,4,5,6,7};
	int arr1[7];

	//arr1=arr;  -->error:lvalue expected
	
	for(int i=0; i<7; i++){
		arr1[i]=arr[i];
		printf("%d\t",arr1[i]);
	}

}
