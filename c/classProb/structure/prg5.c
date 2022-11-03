//structure assignment
//
#include<stdio.h>

struct cricPlayer{
	char pName[20];
	int jerNo;
	float avg;
}obj2={"MS Dhoni",7,45.58};

void main(){
	struct cricPlayer obj1={"Virat Kholi",18,50.33};

	printf("%s\n",obj1.pName);
	printf("%d\n",obj1.jerNo);
	printf("%f\n",obj1.avg);

	printf("%s\n",obj2.pName);
        printf("%d\n",obj2.jerNo);
        printf("%.2f\n",obj2.avg);
}
