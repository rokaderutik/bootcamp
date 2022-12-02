//self referential structure

#include<stdio.h>
#include<string.h>

typedef struct Batsman{
        int jerNo;
        char name[20];
        float avg;
        struct Batsman *next;  //self referential structure
}Bat;

void main(){
	Bat obj1, obj2, obj3;

	Bat *head = &obj1;	//head pointer
	
	//fill data
	head->jerNo = 45;
	strcpy(head->name, "Rohit");
	head->avg = 55.04;
	head->next = &obj2;

	head->next->jerNo = 18;
        strcpy(head->next->name, "Virat");
        head->next->avg = 50.04;
        head->next->next = &obj3;

	head->next->next->jerNo = 33;
        strcpy(head->next->next->name, "Pandya");
        head->next->next->avg = 80.04;
        head->next->next->next = NULL;

	//access data
	printf("\n%d\n", head->jerNo);
	printf("%s\n", head->name);
	printf("%f\n", head->avg);

	printf("\n%d\n", head->next->jerNo);
        printf("%s\n", head->next->name);
        printf("%f\n", head->next->avg);

	printf("\n%d\n", head->next->next->jerNo);
        printf("%s\n", head->next->next->name);
        printf("%f\n", head->next->next->avg);

}
