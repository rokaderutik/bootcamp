//prg4
//reverse DLL 
//using swap (head is not changed only data is swap)

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
}Node;

Node *head = NULL;

Node *createNode(){
	Node *newNode = (Node *)malloc(sizeof(Node));

	newNode->prev = NULL;

	printf("Enter data\n");
	scanf("%d", &newNode->data);

	newNode->next = NULL;

	return newNode;
}

void addNode(){
	Node *newNode = createNode();

	if(head == NULL){
		head = newNode;
	}else{
		Node *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->prev = temp;
	}
}

void printDLL(){
	if(head == NULL){
		printf("Empty LL\n");
	}else{
		Node *temp = head;
		while(temp->next != NULL){
			printf("|%d|<->", temp->data);
			temp = temp->next;
		}
		printf("|%d|\n", temp->data);
	}
}

int countNode(){
	node *temp = head;
	int count = 0;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;
}

void reverseDLL(){
	int count = countNode();
	Node *temp1 = head, *temp2 = head;
	while(temp2->next != NULL){
		temp2 = temp2->next;
	}

}

void main(){
	int no;
	printf("Enter no of nodes u want to enter\n");
	scanf("%d", &no);

	for(int i=1; i<=no; i++)
		addNode();
	
	printDLL();
	
	reverseDLL();
}
