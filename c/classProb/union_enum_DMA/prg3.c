#include <stdio.h>
#include <stdlib.h>

int mallocAdd(){
	int *ptr1 = (int *)malloc(sizeof(int));
	int *ptr2 = (int *)malloc(sizeof(int));

	*ptr1 = 20;
	*ptr2 = 50;

	return *ptr2-*ptr1;
}
void main(){
	printf("%d\n", mallocAdd());
}
