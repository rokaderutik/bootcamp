#include<stdio.h>
void main(){
	int arr[3]={1,2,3};
	char ch='a';
	int x=10;
	int y;
	
	printf("%p\n",&x);
	printf("%p\n",&ch);
	
	printf("%p\n",&y);
	printf("%d\n",y);
	
	y=x;
	
	printf("%p\n",&y);
	printf("%d\n",y);
	
	printf("%p\n",arr);
	printf("%p\n",&arr);
}
