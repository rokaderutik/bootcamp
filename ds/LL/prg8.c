//createnode(), addNode(), addFirst()
//createNode() 1st type

#include <stdio.h>
#include <stdlib.h>

typedef struct Employee{
	char name[20];
	int id;
	struct Employee *next;
}Emp;

Emp *head = NULL;

Emp *createNode(){
	Emp *newNode = (Emp *)malloc(sizeof(Emp));

	getchar();

	printf("Enter a name\n");
	char ch;
	int i = 0;
	while((ch = getchar()) != '\n'){
		newNode->name[i] = ch;
		i++;
	}

	printf("Enter employee id\n");
	scanf("%d", &newNode->id);

	newNode->next = NULL;

	return newNode;
}

void addNode(){
	Emp *newNode = createNode();

	if(head == NULL){
		head = newNode;
	}else{
		Emp *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
}
void addFirst(){
	Emp *newNode = createNode();

	if(head == NULL){
		head = newNode;
	}else{
		newNode->next = head;
		head = newNode;
	}
}
void printLL(){
	Emp * temp = head;
	while(temp != NULL){
		printf("|%s-", temp->name);
		printf("%d|->", temp->id);

		temp = temp->next;
	}
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
}
