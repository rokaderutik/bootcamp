//malloc
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct ipl{
	char sName[10];
	int tTeams;
	double price;
};
void main(){
	struct ipl *ptr=(struct ipl *)malloc(sizeof(struct ipl));

	strcpy((*ptr).sName, "TATA");
	ptr->tTeams=10;
	(*ptr).price=10000000.00;

	printf("%s\n",(*ptr).sName);
	printf("%d\n",ptr->tTeams);
	printf("%f\n",(*ptr).price);
}
