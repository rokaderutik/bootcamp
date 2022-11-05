#include<stdio.h>
void main(){
	char ch1='x';
	char ch2='y';

	char *ptr=&ch2;

	printf("%p\n",ptr);
	printf("%c\n",*ptr);

	printf("%p\n",(ptr+1.5));	//error
	printf("%c\n",*(ptr+1.5));

	printf("%p\n",(ptr+'A'));
        printf("%c\n",*(ptr+'A'));

}
