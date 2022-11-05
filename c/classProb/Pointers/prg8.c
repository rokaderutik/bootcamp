#include<stdio.h>
void main(){
	char ch1='x';
	char ch2='y';
	char ch3='z';

	char *ptr=&ch3;

	printf("%p\n",ptr);
        printf("%c\n",*ptr);

        printf("%p\n",&ch2);
        printf("%c\n",*(ptr+1));
	
	printf("%p\n",&ch1);
        printf("%c\n",*(ptr+2));
}
