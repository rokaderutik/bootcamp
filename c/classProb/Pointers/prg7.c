#include<stdio.h>
void main(){
	int x=10;
	int y=20;
	
	int *ptr=&y;

	printf("%p\n",ptr);
	printf("%d\n",*ptr);

	printf("%p\n",ptr+1);
	printf("%p\n",&x);
	printf("%d\n",*(ptr+1));//10
}
