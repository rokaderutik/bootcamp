//union
#include<stdio.h>
struct Demo1{
	int x;
	float y;
	double z;
}obj1;

union Demo2{
	int x;
	float y;
	double z;
}obj2;

void main(){
	printf("%ld\n",sizeof(struct Demo1));	//16
	printf("%ld\n",sizeof(union Demo2));	//8
	
	//structure address
	printf("%p\n",&obj1.x);   //0x100
        printf("%p\n",&obj1.y);	  //0x104
	printf("%p\n",&obj1.z);   //0x108
       
 	//union address      
	printf("%p\n",&obj2.x);   //0x200
	printf("%p\n",&obj2.y);   //0x200
        printf("%p\n",&obj2.z);   //0x200
}
