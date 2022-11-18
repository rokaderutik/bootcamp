//swap using call by address/reference
#include <stdio.h>

void swap(int *, int *);
void main(){
	int x = 10;
	int y = 20;

	printf("X = %d\nY = %d\n", x, y); //10,20

	printf("In swap\n");
	swap(&x, &y);
	printf("End swap\n");

	printf("X = %d\nY = %d\n", x, y); //20,10
}
void swap(int *x, int *y){
	
	printf("X = %d\nY = %d\n", *x, *y); //10,20

	int temp = *x;
	*x = *y;
	*y = temp;

	printf("X = %d\nY = %d\n", *x, *y); //10,20

}
