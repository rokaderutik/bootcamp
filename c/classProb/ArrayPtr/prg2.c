#include<stdio.h>
void main(){
	int arr1[]={1,2,3};
	int arr2[3];
	int arr[0];

	printf("%ld\n",sizeof(arr));

	for(int i=0;i<3;i++){
		arr2[i]=arr1[i];
	}

	for(int i=0;i<3;i++){
		printf("%d\n",arr2[i]);
	}
}
