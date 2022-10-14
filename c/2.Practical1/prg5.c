/* Wap to input b/n 0-5 and print which no is entered */

#include<stdio.h>

void main(){
	int num;
	printf("Enter a number between 0 to 5\n");
	scanf("%d",&num);

	switch(num){
		case 0:
			printf("zero");
			break;
		case 1:
			printf("one");
			break;
		case 2:
			printf("two");
			break;
		case 3:
			printf("three");
			break;
		case 4:
			printf("four");
			break;
		case 5:
			printf("five");
			break;
		default:
			printf("Wrong input");
	}
}
