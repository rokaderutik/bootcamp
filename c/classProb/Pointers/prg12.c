#include<stdio.h>
void main(){
        char arr[]={'A','B','C','D'};

        char *ptr=arr;
	char *ptr1=&arr[0];

        printf("%c\n",*ptr1);
        printf("%c\n",*(ptr1+1));
        printf("%c\n",*(ptr1+2));
        printf("%c\n",*(ptr1+3));

	printf("%c\n",*ptr);		//A
        printf("%c\n",*(ptr+1));	//B
        printf("%c\n",*(ptr+2));	//C
        printf("%c\n",*(ptr+3));	//D
	
	printf("%c\n",*(ptr+4));	//garbage
}

