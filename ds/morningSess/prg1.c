//prg1
//concate last n no of nodes of SLL

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
}Node;

Node *head1 = NULL;
Node *head2 = NULL;

int flag;

Node *createNode(){
	Node *newNode = (Node *)malloc(sizeof(Node));

	printf("Enter data\n");
	scanf("%d", &newNode->data);

	newNode->next = NULL;

	return newNode;
}

void addNode(Node *head){
	Node *newNode = createNode();

	if(head == NULL){
		head = newNode;
	}else{
		Node *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
	if(flag == 1)
		head1 = head;
	else if(flag == 2)
		head2 = head;
}

void printLL(Node *head){
	if(head == NULL)
		printf("Empty LL\n");
	else{
		while(head->next != NULL){
			printf("|%d|->", head->data);
			head = head->next;
		}
		printf("|%d|\n", head->data);
	}
}

int nodeCount(Node *head){
	int count = 0;
	while(head != NULL){
		count++;
		head = head->next;
	}
	return count;
}

void concateLNNode(int N){
	int cnt1 = nodeCount(head1);
	int cnt2 = nodeCount(head2);

	if(cnt1 == 0 && cnt2 == 0)
		printf("Both LL Empty\n");
	else if(cnt1 != 0 && cnt2 != 0){
		if(N <= 0 || N > cnt2){
			printf("Invalid op\n");
		}else{
			Node *temp1 = head1;
			Node *temp2 = head2;

			while(temp1->next != NULL)
				temp1 = temp1->next;
			
			while(cnt2 - N){
				temp2 = temp2->next;
				N++;
			}

			temp1->next = temp2;
		}
	}else{
		if(cnt1 == 0)
			printf("LL1 Empty\n");
		else
			printf("LL2 Empty\n");
	}
}

void main(){
	int node;
	printf("Enter no of nodes in LL1\n");
	scanf("%d", &node);

	for(int i=1; i<=node; i++){
		flag = 1;
		addNode(head1);
	}

	printf("Enter no of nodes in LL2\n");
	scanf("%d", &node);

	for(int i=1; i<=node; i++){
		flag = 2;
		addNode(head2);
	}

	printLL(head1);
	printLL(head2);
	
	int N;
	printf("Enter last N no of nodes to concate\n");
	scanf("%d", &N);

	concateLNNode(N);

	printLL(head1);
	printLL(head2);
}
