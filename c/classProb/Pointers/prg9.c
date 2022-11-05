//Dangling pointer

#include<stdio.h>
int a=10;
int b;
int *ptr=0;

void fun(){
	int x=30;
	printf("%d\n",a);
	printf("%d\n",b);

	ptr=&x;


	printf("%p\n",ptr);
	printf("%d\n",*ptr);
}
void main(){
	int y=40;

	printf("%d\n",a);
	printf("%d\n",b);

	fun();

	printf("%p\n",ptr);
	printf("%d\n",*ptr);

}
