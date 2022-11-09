//prg3
//take array make square of even & cube of odd & put them respectively

#include<stdio.h>
void main(){
	int len;
	printf("Enter array length\n");
	scanf("%d",&len);

	int arr[len];
	printf("Enter array element\n");
	for(int i=0; i<len; i++){
		scanf("%d",&arr[i]);
	}

	printf("Resultant array\n");
	for(int i=0; i<len; i++){
		if(arr[i]%2==0){
			arr[i]=arr[i]*arr[i];
		}else{
			arr[i]=arr[i]*arr[i]*arr[i];
		}
		printf("%d\t",arr[i]);
	}
}
