//prg1
//find first ocurrence
//
#include<stdio.h>
#include<stdlib.h>

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

int firstOcurr(int num){
	if(head == NULL){
		printf("Empty LL\n");
		return -1;
	}else{
		int index = 0;
		Node *temp = head;
		while(temp != NULL){
			index++;
			if(temp->data == num)
				return index;
			temp = temp->next;
		}
		return -1;
	}
}

void main(){
	int no;
	printf("Enter no of nodes u want to add\n");
	scanf("%d", &no);

	for(int i=1; i<=no; i++)
		addNode();

	printDLL();

	int num;
	printf("Enter no to be searched\n");
	scanf("%d", &num);

	printf("%d\n", firstOcurr(num));
}
