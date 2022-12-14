//prg5
//palindrome or not

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	struct node *prev;
	int data;
	struct node *next;
}node;

node *head = NULL;

node * createNode(){
	node *newNode = (node *)malloc(sizeof(node));

	newNode->prev = NULL;

	printf("Enter data\n");
	scanf("%d", &newNode->data);

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
		newNode->prev = temp;
	}
}

void printLL(){
	if(head == NULL){
		printf("Empty LL\n");
	}else{
		node *temp = head;
		while(temp->next != NULL){
			printf("|%d|<->", temp->data);
			temp = temp->next;
		}
		printf("|%d|\n", temp->data);
	}
}

void palindrome(){
	if(head == NULL){
		printf("Empty LL\n");
	}else{
		node *temp = head;
		int index = 0;
		while(temp != NULL){
			index++;
			int n = temp->data;
			int rev = 0;
	
			while(n != 0){
				rev = rev*10 + n%10;
				n /= 10;
			}
			if(rev == temp->data)
				printf("Palindrome found at %d\n", index);
			temp = temp->next;
		}
	}
}

void main(){
	int no;
	printf("Enter no of nodes\n");
	scanf("%d",&no);

	for(int i=1; i<=no;i++)
		addNode();
	
	printLL();

	palindrome();
}
