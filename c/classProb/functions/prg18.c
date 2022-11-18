//function pointer
#include<stdio.h>
void add(int a,int b){
	printf("Sum = %d\n",a+b);
}
void sub(float a, float b){
	printf("Sub = %f\n", a-b);
}
void sub1(char ch1, char ch2){
	printf("Sub = %d\n",ch1-ch2);
}

void sub2(char ch1, char ch2){
        printf("Sub = %c\n",ch1-ch2);
}

void main(){
	void (*ptr)(int, int);

	ptr = add;
	ptr(10,20);	//30

	ptr = sub;	//warning: assignment from incompatible pointer type
	ptr(30,10);	//0.000000	as float is internally store in different way

	ptr = sub1;	//warning: assignment from incompatible pointer type
	ptr('c','A');	//2

	ptr = sub2;	////warning: assignment from incompatible pointer type
	ptr(120,55);	//A
}
