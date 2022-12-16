//prg1
//all test cases are handled
//createNode(), addNode(), addFirst(), addAtPos(), countNode(), printSCLL(), deleteFirst(), deleteLast(), deleteAtPos()
//switch case in main

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
}Node;

Node *head = NULL;

Node *createNode(){
	Node *newNode = (Node *)malloc(sizeof(Node));

	printf("Enter no\n");
	scanf("%d", &newNode->data);

	newNode->next = NULL;

	return newNode;
}

void addNode(){
	Node *newNode = createNode();

	if(head == NULL){
		head = newNode;
		newNode->next = head;
	}else{
		Node *temp = head;
		while(temp->next != head){
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->next = head;
	}
}

void addFirst(){
	Node *newNode = createNode();

	if(head == NULL){
		head = newNode;
		newNode->next = head;
	}else{
		newNode->next = head;
		Node *temp = head;
		while(temp->next != NULL)
			temp = temp->next;

		head = newNode;
		temp->next = head;
	}
}

int countNode(){
	Node *temp = head;
	int count = 0;
	if(head == NULL)
		return 0;
	else{
		while(temp->next != head){
			count++;
			temp = temp->next;
		}
		return count++;
	}
}

int addAtPos(int pos){
	int count = countNode();
	if(pos <= 0 || pos >count+1){
		printf("Invalid position\n");
		return -1;
	}else{
		if(pos == count+1){
			addNode();//add at last
		}else if(pos == 1){
			addFirst();
		}else{		
			Node *newNode = createNode();
			Node *temp = head;
			while(pos - 2){
				temp = temp->next;
				pos--;
			}
			newNode->next = temp->next;
			temp->next = newNode;
		}
		return 0;
	}
}

void printSCLL(){
	if(head == NULL){
		printf("Empty LL\n");
	} else {
		Node * temp = head;
		while(temp->next != head){
			printf("|%d|->", temp->data);
			temp = temp->next;
		}
		printf("|%d|\n", temp->data);
	}
}

int delFirst(){
	if(head == NULL){
		printf("Empty LL\n");
		return -1;
	} else {
		if(head->next == head){
			free(head);
			head = NULL;
		} else {
			Node *temp = head;
			while(temp->next != head){
				temp = temp->next;
			}
			head = head->next;
			free(temp->next);
			temp->next = head;
		}
		return 0;
	}
}

int delLast(){
	if(head == NULL){
		printf("Empty LL\n");
		return -1;
	} else {
		if(head->next == head){
			free(head);
			head = NULL;
		} else {
			Node *temp = head;
			while(temp->next->next != NULL){
				temp =temp->next;
			}
			free(temp->next);
			temp->next = head;
		}
		return 0;
	}
}

int delAtPos(int pos){
	int count = countNode();
	if(pos <=0 || pos > count){
		printf("Invalid position\n");
		return -1;
	} else {
		if(pos == 1){
			delFirst();
		} else if(pos == count) {
			delLast();
		} else {
			Node *temp = head;
			while(pos-2){
				temp = temp->next;
				pos--;
			}
			Node *temp1 = temp->next;
			temp->next = temp1->next;
			free(temp1);
		}
		return 0;
	}
}

void main(){
	char choice;
	do{
		printf("1.addNode\n");
		printf("2.addFirst\n");
		printf("3.addAtPos\n");
		printf("4.printLL\n");
		printf("5.countNode\n");
		printf("6.delFirst\n");
		printf("7.delLast\n");
		printf("8.delAtPos\n");
		
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
					printf("Enter position to add node\n");
					scanf("%d", &pos);
					addAtPos(pos);
				}
				break;
			case 4:
				printSCLL();
				break;
			case 5:
				printf("No of nodes = %d\n",countNode());
				break;
			case 6:
				delFirst();
				break;
			case 7:
				delLast();
				break;
			case 8:
				{
					int pos;
					printf("Enter position to delete node\n");
					scanf("%d", &pos);
					delAtPos(pos);
				}
				break;
			default :
				printf("Wrong choice\n");
		}
		getchar();
		printf("Do you want to continue\n");
		scanf("%c", &choice);
	}while(choice == 'Y' || choice == 'y');
}

