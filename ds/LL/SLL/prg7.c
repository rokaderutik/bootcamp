//LL with correct addNode & printLL

#include<stdio.h>
#include<stdlib.h>

typedef struct movie{
	char mName[20];
	float imdb;
	struct movie *next;
}MV;

MV *head = NULL;//global head

//addNode function
void addNode(){
	MV *newNode = (MV *)malloc(sizeof(MV));//creating new node in heap
	
	//fill data in node
	printf("Enter movie name\n");
	fgets(newNode->mName, 15, stdin);

	printf("Enter imdb rating\n");
	scanf("%f", &newNode->imdb);
	
	getchar();

	newNode->next = NULL;

	//connecting this node to LL through head pointer
	if(head == NULL){	//empty LL
		head = newNode;
	}else{
		//one or more nodes in LL
		
		MV *temp = head;
		while(temp->next != NULL){	//stop in the node where next is NULL
			temp = temp->next;
		}
		temp->next = newNode;	//adding node to last node of LL	
	}
}

//print LL function
void printLL(){
	MV *temp = head;
	while(temp != NULL){
	
		printf("|%s", temp->mName);
		printf(" -> %.2f|", temp->imdb);

		temp = temp->next;
	}
}

void main(){
	addNode();
	addNode();
	addNode();

	printLL();
}
