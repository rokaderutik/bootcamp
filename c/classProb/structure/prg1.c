#include<stdio.h>

struct cricPlayer{
	int jerNo;
	float avg;
	char grade;
};

struct demo{
        int jerNo;
        float avg;
        double grade;
};

void main(){
	struct cricPlayer vk;
	struct demo obj;

	printf("%ld\n",sizeof(vk));
	printf("%ld\n",sizeof(struct cricPlayer));
	
	printf("%ld\n",sizeof(obj));
        printf("%ld\n",sizeof(struct demo));

}
