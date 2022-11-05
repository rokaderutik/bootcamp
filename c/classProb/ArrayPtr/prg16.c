#include<stdio.h>
void main(){
	int size;
	printf("Enter no. of elements\n");
	scanf("%d",&size);

	int arr1[size];
	int arr2[size];

	int *ptr=arr2;

	printf("Enter  elements\n");
	for(int i=0; i<size; i++){
                scanf("%d",ptr+i);	//store using pointer
		scanf("%d",&arr1[i]);
        }


	for(int i=0; i<size; i++){
                printf("%d\n",*(arr1+i));
		printf("%d\n",*(ptr+i));
        }

}
