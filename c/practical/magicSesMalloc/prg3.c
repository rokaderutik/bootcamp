//WAP that dynamically allocates 2-D array of integers.[use malloc]
//rows=3
//column=4

#include <stdio.h>
#include <stdlib.h>

void main(){
        int row = 3;
	int col = 4;

        int *ptr = (int *)malloc(sizeof(int)*row*col);

        printf("Enter values:\n");
        for(int i = 0; i < row*col; i++){
                scanf("%d", (ptr + i));
        }

        printf("Values are:\n");
        for(int i = 0; i < row*col; i++){
                printf("%d\n", *(ptr + i));
        }
	
	free(ptr);
}

