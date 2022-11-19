//WAP that dynamically alloacates 3-D array of integers, takes values from user & print it.[use malloc]
//plane=2
//row=2
//col=3

#include <stdio.h>
#include <stdlib.h>

void main(){
	int plane = 2;
	int row = 2;
	int col = 3;
        int n = plane*row*col;

        int *ptr = (int *)malloc(sizeof(int)*n);

        printf("Enter values:\n");
        for(int i = 0; i < n; i++){
                scanf("%d", (ptr + i));
        }

        printf("Values are:\n");
        for(int i = 0; i < n; i++){
                printf("%d\n", *(ptr + i));
        }

	free(ptr);
}

