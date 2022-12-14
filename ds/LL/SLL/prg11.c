//prg11
//createNode(), addNode(), addFirst(), addAtPos()
//not all test cases handle in addAtPos()

#include <stdio.h>
#include <stdlib.h>

typedef struct Demo{
	int no;
	struct Demo *next;
}dm;

dm *head = NULL;

dm *createNode(){
	dm *newNode = (dm *)malloc(sizeof(dm));

	printf("Enter no\n");
	scanf("%d", &newNode->no);

	newNode->next = NULL;

	return newNode;
}

void addNode(){
	dm *newNode = createNode();

	if(head == NULL){
		head = newNode;
	}else{
		dm *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
}
void addFirst(){
	dm *newNode = createNode();

	if(head == NULL){
		head = newNode;
	}else{
		newNode->next = head;
		head = newNode;
	}

}

void addAtPos(int pos){
	dm *newNode = createNode();
	dm *temp = head;
	while(pos - 2){
		temp = temp->next;
		pos--;
	}
	newNode->next = temp->next;
	temp->next = newNode;
}
void printLL(){
	dm * temp = head;
	while(temp != NULL){
		printf("|%d|->", temp->no);

		temp = temp->next;
	}
	printf("\n");
}
void main(){
	int node;
	printf("Enter no of nodes u want to add\n");
	scanf("%d", &node);

	for(int i=1; i<=node; i++)
		addNode();

	printLL();
	addFirst();
	printLL();
	
	int pos;
	printf("Enter position\n");
	scanf("%d", &pos);
	addAtPos(pos);

	printLL();
}
