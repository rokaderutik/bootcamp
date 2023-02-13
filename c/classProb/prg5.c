#include <stdio.h>
#include <stdlib.h>
void main(){
	int *ptr = (int *)calloc(5, sizeof(int));

	for(int i=0; i<5; i++)
		*(ptr+i)=10+i;

	for(int i=0; i<5; i++)
		printf("%d\n", *(ptr+i));

	int *ptr2 = (int *)realloc(ptr,12);

	for(int i=0; i<12; i++)
		*(ptr2+i)=10+i;

	for(int i=0; i<12; i++)
		printf("%d\n",*(ptr2+i));

	int *ptr3 = (int *)realloc(ptr2, 0);
}
