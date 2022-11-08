//use of const 
#include<stdio.h>
void main(){
	int x=10;
	const int y=20;//int const
	y=21;

	const int *ptr = &x;//int is const
	
	printf("%d\n",x);

	*ptr=30;

	printf("%d\n",x);

	int a=5;
        int b=8;

        int * const ptr1=&a;//ptr is const

        printf("%d\n",*ptr1);

        ptr1=&b;

        printf("%d\n",*ptr1);

	const int *const ptr2=&b;//int & ptr is const
	b=25;
	printf("%d\n%d\n",b,*ptr2);
	*ptr2=1000;
	printf("%d\n",b);
	ptr2=&a;
	printf("%d\n",*ptr2);

}
