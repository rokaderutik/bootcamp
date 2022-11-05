//pointer

#include<stdio.h>
void main(){
	int x=10;

	int *iptr=&x;
	char *cptr=&x;

	printf("%d\n",*iptr);	//10
        printf("%d\n",*cptr);	//10

	char ch='A';
	int *iptr1=&ch;
	char *cptr1=&ch;

	printf("%d\n",*iptr1);	//garbage
        printf("%d\n",*cptr1);	//65


}
