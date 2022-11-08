//unnamed structure or unanomous structure

#include<stdio.h>

struct{			//un-named structure
	int x;
	int y;
}obj={10,20};

void main(){
	printf("%d\n",obj.x);
	printf("%d\n",obj.y);
}
