//void pointer
#include<stdio.h>
void main(){
	int x=10;
	char ch='A';
	float f=5.6;
	double d=100.5698;

	int *iptr=&x;
	void *cvptr=&ch;
	void *fvptr=&f;
	void *dvptr=&d;
	void *ivptr=&x;


	printf("%p\n",iptr);
        printf("%p\n",ivptr);

	printf("%d\n",*iptr);
       // printf("%d\n",*vptr);	//warning & error

	//type cast void pointer for derefrencing
	printf("%d\n",*((int *)ivptr));
	printf("%c\n",*((char *)cvptr));
	printf("%f\n",*((float *)fvptr));
	printf("%lf\n",*((double *)dvptr));

}
