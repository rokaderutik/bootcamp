//bit field and pragma pack

#include<stdio.h>
#pragma pack(1)
struct demo{
        char ch;	//1
        int x:1;//bit	//1
        float y;	//4
};
void main(){
        struct demo obj={'a',2,500.5};

        printf("%ld\n",sizeof(obj));	//6
}

