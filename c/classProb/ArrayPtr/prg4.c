//prg4

#include<stdio.h>
void main(){
	int arr[]={10,20,30,40,50};
	int *ptr=&(arr[0]);

	printf("%d\n",*ptr);
	printf("%p\n",ptr);

	ptr++;
	*ptr=70;

	printf("%p\n",ptr);
	ptr++;
	(*ptr)++;

	for(int i=0; i<5; i++){
		printf("%d\n",arr[i]);
	}
}
