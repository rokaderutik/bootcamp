#include <stdio.h>

union demo1{
	int x;
	float y;
	char ch;
}obj1;
union demo2{
	char x;
	int y;
	int *ptr;
}obj2;
void main(){
	printf("%ld\n",sizeof(obj1));
	printf("%ld\n",sizeof(obj2));
	
	//union demo1 obj = {10,20.3,'r'};
	obj1.x = 10;
	printf("%d\n", obj1.x);

	obj2.y = 50;
	printf("%d\n", obj2.y);

	obj1.ch = 'R';
	printf("%c\n", obj1.ch);
	printf("%d\n", obj1.x);
}
