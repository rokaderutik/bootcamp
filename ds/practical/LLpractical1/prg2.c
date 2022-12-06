//prg2
#include<stdio.h>
#include<stdlib.h>

typedef struct state{
	char sName[15];
	int pop;
	float bug;
	float lit;
	struct state *next;
}ST;

ST *head = NULL;

void addNode(){
	ST *newNode = (ST *)malloc(sizeof(ST));

	getchar();

	printf("Enter state name\n");
	scanf("%[^\n]", newNode->sName);

	printf("Enter population\n");
	scanf("%d", &newNode->pop);

	printf("Enter budget\n");
	scanf("%f",&newNode->bug);

	printf("Enter litreavy rate\n");
	scanf("%f",&newNode->lit);

	newNode->next = NULL;

	if(head == NULL){
		head = newNode;
	}else{
		ST *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
}
void printLL(){
	ST *temp = head;
	while(temp != NULL){
		printf("|%s-", temp->sName);
		printf("%d-", temp->pop);
		printf("%f-", temp->bug);
		printf("%f|->", temp->lit);

		temp = temp->next;
	}
}
void main(){
	int n;
        printf("Enter how many states u want to add?\n");
        scanf("%d", &n);

        for(int i=1; i<=n; i++)
                addNode();

        printLL();
        printf("\n");
}

