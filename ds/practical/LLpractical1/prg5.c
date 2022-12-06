//prg5
//add all LL element

#include<stdio.h>
#include<stdlib.h>

typedef struct Demo{
	int no;
	struct Demo *next;
}dm;

dm *head = NULL;

void addNode(){
	dm *newNode = (dm *)malloc(sizeof(dm));

	printf("Enter no.\n");
	scanf("%d", &newNode->no);

	newNode->next = NULL;

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
void printLL(){
	dm *temp = head;

	while(temp != NULL){
		printf("|%d|->", temp->no);

		temp = temp->next;
	}
}
int addData(){
	dm *temp = head;
	int sum = 0;
	while(temp != NULL){
		sum += temp->no;
		temp = temp->next;
	}
	return sum;
}
void main(){
	int node;
	printf("Enter no of nodes\n");
	scanf("%d", &node);

	for(int i = 1; i <= node; i++)
		addNode();

	printLL();
	printf("\nSum = %d\n", addData());
}
