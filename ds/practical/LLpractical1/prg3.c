//prg3
#include<stdio.h>
#include<stdlib.h>
typedef struct festival{
	char fName[10];
	int noHol;
	struct festival *next;
}Fest;

Fest *head = NULL;

void addNode(){
	Fest *newNode = (Fest *)malloc(sizeof(Fest));

	printf("Enter festival name\n");
	gets(newNode->fName);

	printf("Enter no of holidays\n");
	scanf("%d", &newNode->noHol);

	getchar();

	newNode->next = NULL;

	if(head == NULL){
		head = newNode;
	}else{
		Fest *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
}
void printLL(){
	Fest *temp = head;

	while(temp != NULL){
		printf("|%s-", temp->fName);
		printf("%d|", temp->noHol);

		temp = temp->next;
	}
}

void main(){
	addNode();
	addNode();
	addNode();
	printLL();
}
