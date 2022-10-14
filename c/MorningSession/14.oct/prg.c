#include<stdio.h>
void main(){
	int n;
	printf("Enter array size\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter arry elements\n");
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	int sumleft=0;
	for(int i=0; i<n; i++){
		sumleft+=arr[i];
		int sumright=0;
		for(int j=i+2; j<n; j++){
			sumright+=arr[j];
		if(sumleft==sumright){
			printf("%d\n",arr[i+1]);
		}
		}
	}
}
