//prg12
//createNode(), addNode(), addFirst(), addAtPos()
//all test cases handle in addAtPos()
//switch case in main

#include <stdio.h>
#include <stdlib.h>

typedef struct Demo{
	int no;
	struct Demo *next;
}dm;

dm *head = NULL;

dm *createNode(){
	dm *newNode = (dm *)malloc(sizeof(dm));

	printf("Enter no\n");
	scanf("%d", &newNode->no);

	newNode->next = NULL;

	return newNode;
}

void addNode(){
	dm *newNode = createNode();

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

void addFirst(){
	dm *newNode = createNode();

	if(head == NULL){
		head = newNode;
	}else{
		newNode->next = head;
		head = newNode;
	}
}

void addAtPos(int pos){
	dm *newNode = createNode();
	dm *temp = head;
	while(pos - 2){
		temp = temp->next;
		pos--;
	}
	newNode->next = temp->next;
	temp->next = newNode;
}

void printLL(){
	dm * temp = head;
	while(temp != NULL){
		printf("|%d|->", temp->no);

		temp = temp->next;
	}
	printf("\n");
}

int countNode(){
	dm *temp = head;
	int count = 0;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;
}

void main(){
	char choice;
	do{
		printf("1.addNode\n");
		printf("2.addFirst\n");
		printf("3.addAtPos\n");
		printf("4.printLL\n");
		printf("5.countNode\n");
		
		int ch;
		printf("Enter your choice\n");
		scanf("%d", &ch);

		switch(ch){
			case 1:
				addNode();
				break;
			case 2:
				addFirst();
				break;
			case 3:
				{
					int pos;
					printf("Enter position\n");
					scanf("%d", &pos);
					int count = countNode();
					if(pos == 1){
						addFirst();
					}else if(pos <= 0 || pos > count+1){
						printf("Wrong position\n");
					}else{
						addAtPos(pos);
					}
				}
				break;
			case 4:
				printLL();
				break;
			default :
				printf("Wrong choice\n");
		}
		getchar();
		printf("Do you want to continue\n");
		scanf("%c", &choice);
	}while(choice == 'Y' || choice == 'y');
}

