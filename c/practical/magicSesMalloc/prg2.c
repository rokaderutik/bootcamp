//WAP taht dynamically allocate 1-D array of marks, take value from user & print it.

#include <stdio.h>
#include <stdlib.h>

void main(){
	int n;
	printf("Enter no. of students\n");
	scanf("%d", &n);

	int *ptr = (int *)malloc(sizeof(int)*n);

	printf("Enter marks:\n");
	for(int i = 0; i < n; i++){
		scanf("%d", (ptr + i));
	}

	printf("Marks are:\n");
	for(int i = 0; i < n; i++){
                printf("%d\n", *(ptr + i));
        }

	free(ptr);

}
