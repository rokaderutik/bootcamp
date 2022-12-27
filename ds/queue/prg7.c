//priority queue starting
//using LL front & rear
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

Node *front = NULL;
Node *rear = NULL;
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

	if(front == NULL){ //empty LL
		front = newNode;
		rear = newNode;

	} else if(front->prt < newNode->prt) { //add at first position
		newNode->next = front;
		front = newNode;

	} else if(rear->prt > newNode->prt) { // add at last
		rear->next = newNode;
		rear = newNode;

	} else {
		//as priority is not higest & lowest node should be add in between any two nodes
		Node *temp = front;

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
	}
	return 0;
}

int delFirst(){
	if(front == NULL){
		printf("Empty LL\n");
		flag = 0;
		return -1;
	} else {
		int ret = front->data;
		flag = 1;

		if(front == rear){	//single node in LL
			free(front);
			front = NULL;
			rear = NULL;
		} else {
			Node *temp = front;
			front = front->next;
			free(temp);
		}
		return ret;
	}
}

void printLL(){
	if(front == NULL){
		printf("Empty LL\n");
	} else {
		Node *temp = front;
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
