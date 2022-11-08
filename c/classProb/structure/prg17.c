//obj and &obj

#include<stdio.h>
struct demo{
	int x;
	float y;
};
void main(){
	struct demo obj={10,20.5f};
	int arr[]={1,2,3,4};

	printf("%p\n",&arr[0]);//0x100
	printf("%p\n",arr);//0x100

	printf("%p\n",&obj.x);//0x200
	printf("%p\n",&obj);//0x200

	printf("%p\n",obj);//0x41a400000000000a
	printf("%d\n",obj);//10
}
