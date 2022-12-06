//prg1
#include<stdio.h>
#include<stdlib.h>

typedef struct mall{
	char mName[20];
	int noShop;
	float rev;
	struct mall *next;
}ML;

ML *head = NULL;

void addNode(){
	ML *newNode = (ML *)malloc(sizeof(ML));

	getchar();

	printf("Enter mall name\n");
	scanf("%[^\n]", newNode->mName);

	printf("Enter no. of shops\n");
	scanf("%d", &newNode->noShop);

	printf("Enter mall revenue\n");
	scanf("%f",&newNode->rev);

	newNode->next = NULL;

	if(head == NULL){
		head = newNode;
	}else{
		ML *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
}
void printLL(){
	ML *temp = head;
	while(temp != NULL){
		printf("|%s-", temp->mName);
		printf("%d-", temp->noShop);
		printf("%f|->", temp->rev);

		temp = temp->next;
	}
}
void main(){
	int n;
	printf("Enter how many malls u want to add?\n");
	scanf("%d", &n);

	for(int i=1; i<=n; i++)
		addNode();

	printLL();
	printf("\n");
}
