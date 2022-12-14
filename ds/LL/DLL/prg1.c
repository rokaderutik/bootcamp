//prg1
//DLL functions

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	struct node *prev;
	int data;
	struct node *next;
}node;

node *head = NULL;

node *createNode(){
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

int countNode(){
	int count = 0;
	node *temp = head;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;
}

void printDLL(){
	if(head == NULL){
		printf("Empty list\n");
	}else{
		node *temp = head;
		while(temp->next != NULL){
			printf("|%d|<->", temp->data);
			temp = temp->next;
		}
		printf("|%d|", temp->data);
	}
}

void addFirst(){
	node *newNode = createNode();
	if(head == NULL){
		head = newNode;
	}else{
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}
}

int addAtPos(int pos){
	int count = countNode();
	if(pos <= 0 || pos > count+1){
		printf("Invalid Position\n");
		return -1;
	}else{
		if(pos == 1){
			addFirst();
		}else if(pos == count+1){
			addNode();
		}else{
			node *newNode = createNode();
			node *temp = head;
			while(pos-2){
				temp = temp->next;
				pos--;
			}
			newNode->next = temp->next;
			newNode->prev = temp;
			temp->next = newNode;
			newNode->next->prev = newNode;
		}
		return 0;
	}
}

void delFirst(){
	if(head == NULL){
		printf("Empty LL\n");
	}else if(head->next == NULL){
		free(head);
		head = NULL;
	}else{
		head = head->next;
		free(head->prev);
		head->prev = NULL;
	}
}

void delLast(){
	if(head == NULL){
		printf("Empty LL\n");
	}else if(head->next == NULL){
		free(head);
		head = NULL;
	}else{
		node *temp = head;
		while(temp->next->next != NULL){
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}

void delAtPos(int pos){
	int count = countNode();
	if(pos <= 0 || pos > count){
		printf("Invalid position\n");
	}else if(pos == 1){
		delFirst();
	}else if(pos == count){
		delLast();
	}else{
		node *temp = head;
		while(pos-2){
			temp = temp->next;
			pos--;
		}
		temp->next = temp->next->next;
		free(temp->next->prev);
		temp->next->prev = temp;
	}
}

void main(){
	char choice;
	do{
		printf("\n1.addNode\n");
		printf("2.addFirst\n");
		printf("3.addAtPos\n");
		printf("4.printDLL\n");
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
				printDLL();
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
		printf("\nDo you want to continue\n");
		scanf("%c", &choice);
	}while(choice == 'Y' || choice == 'y');
}

