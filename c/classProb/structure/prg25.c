//print address when using bit-field
#include<stdio.h>
struct Employee{
	int x:4;
	float y;
	double z;
}obj;

void main(){

	//error:
	//cannot take address of bit-field 'x'
	printf("%p\n",&obj.x);
	printf("%p\n",&obj.y);
	printf("%p\n",&obj.z);

	printf("%ld\n",sizeof(obj));
}
