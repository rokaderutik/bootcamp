//prg10
//real time example

#include <stdio.h>
#include <stdlib.h>

typedef struct placement{
	char cName[20];
	int noStd;
	float pkg;
	struct placement *next;
}plc;

plc *head = NULL;

void addNode(){
	plc *newNode = (plc*)malloc(sizeof(plc));
	
	getchar();

	printf("Enter company name\n");
	gets(newNode->cName);

	printf("Enter no of students taken by company\n");
	scanf("%d", &newNode->noStd);

	printf("Enter package offer\n");
	scanf("%f", &newNode->pkg);

	newNode->next = NULL;

	if(head == NULL){
		head = newNode;
	}else{
		plc *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void printLL(){
	plc *temp = head;
	while(temp != NULL){
		printf("|%s-", temp->cName);
		printf("%d-", temp->noStd);
		printf("%f|->", temp->pkg);

		temp = temp->next;
	}
}
void main(){
	int node;
	printf("Enter no of nodes\n");
	scanf("%d", &node);

	for(int i = 1; i <= node; i++)
		addNode();

	printLL();
}
