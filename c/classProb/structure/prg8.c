#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct society{
	char sName[20];
	int wings;
	float avgRent;
};

void main(){
	struct society *ptr=(struct society *)malloc(sizeof(struct society));

	strcpy((*ptr).sName,"sun universe");
	ptr->wings=8;
	(*ptr).avgRent=15000.00;

	printf("%s\n",ptr->sName);
        printf("%d\n",(*ptr).wings);
        printf("%f\n",ptr->avgRent);

}
