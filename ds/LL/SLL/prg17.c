//prg17
//SLL reverse using data swap

#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}node;

node *head = NULL;

node *createNode(){
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

int countNode(){
	int count = 0;
	node *temp = head;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;
}

void reverseLL(){
	int cnt = countNode()/2;
	int cnt1 = cnt, cnt2, temp;
	if(head == NULL){
		printf("Empty LL\n");
	}else{
		node *temp1 = head, *temp2;
		while(cnt1){
			cnt2 = cnt;//cnt is total node count
			temp2 = head;
			while(cnt2-1){
				temp2 = temp2->next;
				cnt2--;
			}
			temp = temp1->data;
			temp1->data = temp2->data;
			temp2->data = temp;

			temp1 = temp1->next;
			cnt1--;
			cnt--;
		}
	}
} 

void main(){
	int n;
	printf("Enter no of nodes\n");
	scanf("%d", &n);

	for(int i=1; i<=n; i++)
		addNode();
	
	printLL();
	
	reverseLL();

	printLL();
}
