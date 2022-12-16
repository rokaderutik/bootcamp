//prg8
//take node from user  then take one length from user & only kept those nodes in LL whose length is equal to user length

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
	struct node *prev;
	char str[20];
	struct node *next;
}node;

node *head = NULL;

node * createNode(){
	node *newNode = (node *)malloc(sizeof(node));

	newNode->prev = NULL;

	printf("Enter name\n");
	
	char ch;
	int i = 0;
	while((ch = getchar()) != '\n'){
		newNode->str[i++] = ch;
	}

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

void printLL(){
	if(head == NULL){
		printf("Empty LL\n");
	}else{
		node *temp = head;
		while(temp->next != NULL){
			printf("|%s|<->", temp->str);
			temp = temp->next;
		}
		printf("|%s|\n", temp->str);
	}
}

int countNode(){
	node *temp = head;
	int count = 0;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;
}

node *delFirst(){
	head = head->next;
	free(head->prev);
	return head;
}

node *delLast(){
	node *temp = head;
	while(temp->next->next != NULL){
		temp = temp->next;
	}
	free(temp->next);
	temp->next = NULL;
	return temp->next;
}

node *delAtPos(int pos){
	node *temp = head;
	while(pos-2){
		temp = temp->next;
		pos--;
	}
	temp->next = temp->next->next;
	free(temp->next->prev);
	return temp->next;

}

node *checkLen(int len){
	node *temp = head;
	int index = 1;

	if(head == NULL){
		printf("Empty LL\n");
	}else{
		while(temp != NULL){
			if(strlen(temp->str) != len){
				if(index == 1){
					temp = delFirst();
				}else if(temp->next == NULL){
					temp = delLast();
				}else{
					temp = delAtPos(index);
				}
			}else{
				index++;
				temp = temp->next;
			}
		}
	}
	return head;
}

void main(){
	int no;
	printf("Enter no of nodes\n");
	scanf("%d",&no);

	getchar();
	for(int i=1; i<=no;i++)
		addNode();
	
	printLL();

	int len;
	printf("Enter length\n");
	scanf("%d", &len);

	head = checkLen(len);

	printLL();
}
