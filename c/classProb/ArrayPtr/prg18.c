#include<stdio.h>
void main(){
	int arr1[]={10,20,30};
	int arr2[]={40,50,60};

	int *iptr[]={&arr1,&arr2};//wrong syntax but due to compiler we get correct o/p

	 printf("%p\n",iptr[0]);
	 printf("%p\n",iptr[1]);

	 printf("%d\n",*iptr[0]);//10
	 printf("%d\n",*iptr[1]);//40

}
