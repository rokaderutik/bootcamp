//prg11
//Array of pointers
#include<stdio.h>
void main(){
	int x=10;
	char ch='A';
	double d=30.05;

	void* arr[3]={&x,&ch,&d};
	
	printf("%ld\n",sizeof(arr));

	printf("%p\n",arr[0]);
	printf("%p\n",arr[1]);
	printf("%p\n",arr[2]);

	printf("%d\n",*((int*)arr[0]));
	printf("%c\n",*((char*)arr[1]));
	printf("%lf\n",*((double*)arr[2]));
}
