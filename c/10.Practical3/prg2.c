//count odd & even element in array

#include<stdio.h>
void main(){
	int size;
	printf("Enter array size\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter array element\n");
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}

	int codd=0,ceven=0;
	for(int i=0; i<size; i++){
		if(arr[i]%2==0){
			ceven++;
		}else{
			codd++;
		}
	}
	printf("Total odd no.s = %d\n",codd);
	printf("Total even no.s = %d\n",ceven);
}
