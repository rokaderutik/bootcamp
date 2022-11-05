#include<stdio.h>
void main(){
        double x=10.20;
	char y='A';

        double *ptr1=&x;
        char *ptr2=&y;

        printf("%p\n",ptr1);
        printf("%p\n",ptr2);

        printf("%lf\n",*ptr1);
        printf("%c\n",*ptr2);

}

