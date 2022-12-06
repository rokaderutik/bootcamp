//prg8
//find mini data in LL

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
		printf(">|%d|-", temp->no);

		temp = temp->next;
	}
}
int minData(){
	int min = head->no;
	dm *temp = head;
	while(temp->next != NULL){
		if(temp->no < min)
			min = temp->no;

		temp = temp->next;
	}
	return min;
}
void main(){
	int node;
	printf("Enter no of nodes\n");
	scanf("%d", &node);

	for(int i = 1; i <= node; i++)
		addNode();

	printLL();
	printf("\nmin = %d\n", minData());
}
