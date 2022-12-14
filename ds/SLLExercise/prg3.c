//prg3
//count  occurenece of element

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node *head = NULL;

node * createNode(){
	node *newNode = (node *)malloc(sizeof(node));

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
	}
}

void printLL(){
	node *temp = head;
	while(temp->next != NULL){
		printf("|%d|->", temp->data);
		temp = temp->next;
	}
	printf("|%d|\n", temp->data);
}
int findOcurr(int num){
	if(head == NULL){
		printf("Empty LL\n");
		return -1;
	}else{
		node *temp = head;
		int count = 0;
		while(temp != NULL){
			if(temp->data == num){
				count++;
			}
			temp = temp->next;
		}
		if(count == 0)
			printf("Not present\n");
		else
			printf("%d\n", count);
	}
}

void main(){
	int no,num;
	printf("Enter no of nodes\n");
	scanf("%d",&no);

	for(int i=1; i<=no;i++)
		addNode();
	
	printLL();
	printf("Enter no to be searched\n");
	scanf("%d", &num);

	findOcurr(num);
}
