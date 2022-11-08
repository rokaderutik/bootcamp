//pointer to an array 
//array
#include<stdio.h>
void main(){
	char carr[]={'a','b','c'};
	char carr2[]={'d','e','f'};

	char *ptr1=&carr[1];
	char *ptr2=carr;
	char (*ptr3)[3]=&carr2;
	char (*ptr4)[]=&carr;

	printf("%c\n",**ptr3);//d
	ptr3++;
	printf("%c\n",**ptr3);//a

	printf("%c\n",*ptr2);//a
	printf("%c\n",*ptr1);//b
	ptr1++;
	ptr2++;
	printf("%c\n",*ptr2);//b
        printf("%c\n",*ptr1);//c
	
	//access 'c' using ptr4
	printf("%c\n",*(*ptr4+2));
}
