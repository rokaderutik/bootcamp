#include<stdio.h>

struct Demo{
	float f1;
	char * ch;
	int x;
	int y;
};
void main(){
	printf("%ld\n",sizeof(struct Demo));
}
