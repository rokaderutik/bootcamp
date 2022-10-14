//prg9
//2-D array
#include<stdio.h>
void main(){
	int arr[3][3]={1,2,3,4,5,6,7,8,9};

	printf("%d\n",arr[0][2]);
	printf("%d\n",arr[1][0]);
	printf("%d\n",arr[2][1]);
	

	printf("%p\n",arr);
	printf("%p\n",arr[0]);
	printf("%p\n",arr[1]);
	printf("%p\n",arr[2]);

	printf("%p\n",&arr[0][0]);
	printf("%p\n",&arr[1][0]);
	printf("%p\n",&arr[2][0]);

	printf("Size\n");
	printf("%ld\n",sizeof(arr));
	printf("%ld\n",sizeof(arr[0]));
	printf("%ld\n",sizeof(arr[0][2]));

}
