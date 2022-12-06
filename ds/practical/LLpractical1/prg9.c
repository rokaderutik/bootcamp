//check prime no in LL

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
void checkPrime(){
	dm *temp = head;
	while(temp != NULL){
		int flag = 0;
		for(int i = 2; i < temp->no; i++){
			if(temp->no % i == 0){
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			printf("%d ",temp->no);

		temp = temp->next;
	}
}
void main(){
	int node;
	printf("Enter no of nodes\n");
	scanf("%d", &node);

	for(int i = 1; i <= node; i++)
		addNode();

	printLL();
	checkPrime();
}
