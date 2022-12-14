//prg14
/*take no of nodes from user, fill data in it from user, take another no from user & do following operation on LL:
 1.check data is present or not in LL
 2. find 2nd last occurence of data in LL
 3.if data present only once in LL then print that */

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int no;
	struct node *next;
}node;

node *head = NULL;

node *createNode(){
	node *newNode = (node *)malloc(sizeof(node));

	printf("Enter data\n");
	scanf("%d", &newNode->no);

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
	while(temp != NULL){
		printf("|%d|->", temp->no);
		temp = temp->next;
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

int presentOrNot(int num){
	node *temp = head;
	while(temp != NULL){
		if(temp->no == num){
			return 0;
		}
		temp = temp->next;
	}
	return -1;
}

int findOccur(int num){
	int chk = presentOrNot(num);
	if(chk == 0){
		int index = 1;
		int lastInd, sndLastInd;
		int occurCount = 0;
		node *temp = head;
		while(temp != NULL){
			if(temp->no == num){
				occurCount++;
				if(occurCount == 1){
					lastInd = index;
				}else{
					sndLastInd = lastInd;
					lastInd = index;
				}
			}
			index++;
			temp = temp->next;
		}
		if(occurCount == 1){
			printf("%d present only once in LL at index %d\n", num, lastInd);
		}else{
			printf("%d's 2nd last occurence is at index %d\n", num, sndLastInd);
		}
		return 0;
	}
	printf("%d is not found in LL\n", num);
	return -1;
}

void main(){
	int n;
	printf("Enter no of nodes\n");
	scanf("%d", &n);

	for(int i=1; i<=n; i++){
		addNode();
	}
	
	printLL();
	printf("\n");
	char choice;
	do{
		int num;
		printf("Enter no\n");
		scanf("%d", &num);
	
		findOccur(num);
		getchar();
		printf("Do you want to continue?\n");
		scanf("%c", &choice);
	}while(choice == 'Y' || choice == 'y');
}
