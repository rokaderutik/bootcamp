//bit field

#include<stdio.h>
struct demo{
	char ch;
	int x:1;//bit
	float y;
};
void main(){
	struct demo obj={'a',106,500.5};

	printf("%ld\n",sizeof(obj));
}
