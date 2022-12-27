//priority queue starting
//using LL
//take data & priority from user
//priority is b/w 0 to 5
//0 is low & 5 is high

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	int prt;
	struct Node *next;
}Node;

Node *head = NULL;
int flag;

//create node
Node *createNode(){
	Node *newNode = (Node *)malloc(sizeof(Node));

	printf("Enter data\n");
	scanf("%d", &newNode->data);

	int p;//for priority
	
	do{
		printf("Enter priority between 0 to 5\n");
		scanf("%d", &p);

		//check priority is in 0 to 5
		if(p >= 0 && p <= 5){
			newNode->prt = p;
			break;
		} else {
			printf("wrong i/p for priority\n");
		}
	}while(1);

	newNode->next = NULL;

	return newNode;
}

int addNode(){
	Node *newNode = createNode();

	if(head == NULL){ //empty LL
		head = newNode;

	} else if(head->prt < newNode->prt) { //add at first position
		newNode->next = head;
		head = newNode;

	} else {
		Node *temp = head;

		//add at position
		while(temp->next != NULL){
			//find position for node between two nodes
			if(temp->prt >= newNode->prt && newNode->prt > temp->next->prt){
				newNode->next = temp->next;
				temp->next = newNode;
				return 0;
			}
			temp = temp->next;
		}

		//from above loop node is not inserted at any position between two nodes
		//now our temp is at last node

		//add last
		temp->next = newNode;
	}
	return 0;
}

int delFirst(){
	if(head == NULL){
		printf("Empty LL\n");
		flag = 0;
		return -1;
	} else {
		int ret = head->data;
		flag = 1;

		if(head->next == NULL){	//single node in LL
			free(head);
			head = NULL;
		} else {
			Node *temp = head;
			head = head->next;
			free(temp);
		}
		return ret;
	}
}

void printLL(){
	if(head == NULL){
		printf("Empty LL\n");
	} else {
		Node *temp = head;
		while(temp->next != NULL){
			printf("|%d|->", temp->data);
			temp = temp->next;
		}
		printf("|%d|\n", temp->data);
	}
}

void main(){
	char choice;

	do{
		printf("1.addNode\n");
		printf("2.delNode\n");
		printf("3.printLL\n");

		int ch;
		printf("Enter your choice\n");
		scanf("%d", &ch);

		switch(ch){
			case 1:
				addNode();
				break;
			case 2:
				{
					int ret = delFirst();
					if(flag == 1)
						printf("%d is deleted\n", ret);
				}
				break;
			case 3:
				printLL();
				break;
			default :
				printf("Wrong choice\n");
		}
	
		getchar();
		printf("Do u want to continue?\n");
		scanf("%c", &choice);
	}while(choice == 'Y' || choice == 'y');
}
