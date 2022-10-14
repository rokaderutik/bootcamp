//WAP to find element in array
//take array & element from user

#include<stdio.h>
void main(){
	int size,num,flag=0;
	printf("Enter size of array\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter array element\n");
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter element to be search\n");
	scanf("%d",&num);

	for(int i=0; i<size; i++){
		if(arr[i]==num){
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("%d is found in array\n",num);
	else
		printf("%d is not found in array\n",num);
}
