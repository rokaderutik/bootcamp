//prg8
//accessing 2-D array like 1-D array(By 1 for loop)

#include<stdio.h>
void main(){
	int arr[2][3];
	printf("Enter elements\n");
	for(int row=0; row<2; row++){
		for(int col=0; col<3; col++){
			scanf("%d",&arr[row][col]);
		}
	
	}
	printf("Array:\n");
	for(int row=0; row<2; row++){
		for(int col=0; col<3; col++){
			printf("%d ",arr[row][col]);
		}
		printf("\n");
	}
	// accessing by 1 for loop
	
	printf("\n");
	for(int i=0; i<6; i++){
		printf("%p\n",arr[i]);
		printf("%d\n",*(*arr+i));
	}
}
