#include<stdio.h>
void main(){
	int arr1[3];
	int arr2[1];
	int arr3[0];

	printf("%ld\n",sizeof(arr1));	//12
	printf("%ld\n",sizeof(arr2));	//4
	printf("%ld\n",sizeof(arr3));	//0
	
}
