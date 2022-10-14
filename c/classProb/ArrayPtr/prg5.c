//array as internally pointer

#include<stdio.h>
void main(){
	int arr[]={1,2,3,4,5,6};
	for(int i=0; i<6; i++){
		printf("%d\n",arr[i]);
		printf("%d\n",*(arr+i));
	}
}
