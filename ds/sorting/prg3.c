//sort linked list using bubble sort

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node *head = NULL;
int cnt = 0;

node *createNode(){
	node *newNode = (node *)malloc(sizeof(node));

	printf("Enter data\n");
	scanf("%d", &newNode->data);
	newNode->next = NULL;

	return newNode;
}

void addNode(){
	node *newNode = createNode();

	if(head == NULL)
		head = newNode;
	else{
		node *temp = head;
		while(temp->next != NULL)
			temp = temp->next;

		temp->next = newNode;
	}
	cnt++;
}

void printLL(){
	node *temp = head;
	
	if(head == NULL)
		printf("Empty LL\n");
	else{
		while(temp->next != NULL){
			printf("|%d|->",temp->data);
			temp = temp->next;
		}
		printf("|%d|\n",temp->data);
	}
}

void bubbleSortLL(){
	node *temp = head;
	for(int i=1; i<cnt; i++){
		for(int j=1; j<=cnt-i; j++){

			if(temp->data > temp->next->data){
				int var = temp->data;
				temp->data = temp->next->data;
				temp->next->data = var;
			}
			temp = temp->next;
		}
		printLL();
		temp = head;
	}
}

void main(){
	printLL();

	for(int i=0; i<5; i++)
		addNode();

	printLL();
	printf("Count = %d\n",cnt);

	bubbleSortLL();

	printLL();
}
