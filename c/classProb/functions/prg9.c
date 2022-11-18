//call by value

#include <stdio.h>
void swap(int, int);	//decleration

void main(){
	int x = 10;
	int y = 20;

	printf("X = %d\n", x);	//10
	printf("Y = %d\n", y);	//20

	printf("start swap\n");
	swap(x, y); 	//function call
	printf("end swap\n");

	printf("X = %d\n", x);	//10
	printf("Y = %d\n", y);	//20
}
//function body
void swap(int x, int y){
	printf("X = %d\n", x);	//10
	printf("Y = %d\n", y);	//20

	int temp = x;
	x = y;
	y = temp;
	
	printf("X = %d\n", x);	//20
	printf("Y = %d\n", y);	//10
}
