//prg7
//reverse data string  & print LL

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
	char str[20];
	struct node *next;
}node;

node *head = NULL;

node * createNode(){
	node *newNode = (node *)malloc(sizeof(node));

	printf("Enter name\n");
	char ch;
	int i = 0;
	while((ch = getchar()) != '\n'){
		newNode->str[i++] = ch;
	}

	newNode->next = NULL;

	return newNode;
}

void addNode(){
	node *newNode = createNode();

	if(head == NULL){
		head = newNode;
	}else{
		node *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void printLL(){
	node *temp = head;
	while(temp->next != NULL){
		printf("|%s|->", temp->str);
		temp = temp->next;
	}
	printf("|%s|\n", temp->str);
}

void reverseStr(){
	if(head == NULL){
		printf("Empty LL\n");
	}else{
		node *temp = head;
		char ch;
		while(temp != NULL){
			for(int i=0, j=strlen(temp->str)-1; i<j; i++, j--){
				ch = temp->str[i];
				temp->str[i] = temp->str[j];
				temp->str[j] = ch;
			}
			temp = temp->next;
		}
	}
}

void main(){
	int no;
	printf("Enter no of nodes\n");
	scanf("%d",&no);

	getchar();
	for(int i=1; i<=no;i++)
		addNode();
	
	printLL();

	reverseStr();

	printLL();
}
