#include<stdio.h>
void main(){
	char carr[] = {'A','B','C','D'};
	char *ptr1 = &carr[2];
	char *ptr2 = &carr[3];

	printf("%c\n",*ptr1);
	printf("%c\n",*ptr2);
	printf("%c\n",*(ptr1+2));
	printf("%c\n",*(ptr2+1));
}
