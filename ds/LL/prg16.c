//realtime example with all 8 function & switch case in main()

#include <stdio.h>
#include <stdlib.h>

typedef struct travel{
	char dest[20];//destination location
	int seatNo;
	float fair;
	struct travel *next;
}trv;

trv *head = NULL;

trv *createNode(){
	trv *newNode = (trv *)malloc(sizeof(trv));

	getchar();

	printf("Enter destination location\n");
	char ch;
	int i=0;
	while((ch = getchar()) != '\n'){
		(*newNode).dest[i++] = ch;
	}

	printf("Enter seat no.\n");
	scanf("%d", &newNode->seatNo);

	printf("Enter ticket price\n");
	scanf("%f", &newNode->fair);

	newNode->next = NULL;

	return newNode;
}

void addNode(){
	trv *newNode = createNode();

	if(head == NULL){
		head = newNode;
	}else{
		trv *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void addFirst(){
	trv *newNode = createNode();

	if(head == NULL){
		head = newNode;
	}else{
		newNode->next = head;
		head = newNode;
	}
}

int countNode(){
	trv *temp = head;
	int count = 0;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;
}

int addAtPos(int pos){
	int count = countNode();
	if(pos <= 0 || pos >=count+2){
		printf("Invalid position\n");
		return -1;
	}else{
		if(pos == count+1){
			addNode();//add at last
		}else if(pos == 1){
			addFirst();
		}else{		
			trv *newNode = createNode();
			trv *temp = head;
			while(pos - 2){
				temp = temp->next;
				pos--;
			}
			newNode->next = temp->next;
			temp->next = newNode;
		}
		return 0;
	}
}

void printLL(){
	trv * temp = head;
	while(temp->next != NULL){
		printf("|%s-", temp->dest);
		printf("%d-", temp->seatNo);
		printf("%.2f|->", temp->fair);

		temp = temp->next;
	}
	printf("|%s-", temp->dest);
        printf("%d-", temp->seatNo);
	printf("%.2f|", temp->fair);

	printf("\n");
}

void deleteFirst(){
	trv *temp = head;
	head = temp->next;	//or head = head->next;
	free(temp);
}

void deleteLast(){
	trv *temp = head;
	while(temp->next->next != NULL){
		temp =temp->next;
	}
	free(temp->next);
	temp->next = NULL;
}

int deleteAtPos(int pos){
	int count = countNode();
	if(pos <=0 || pos >= count+1){
		printf("Invalid position\n");
		return -1;
	}else{
		if(pos == 1){
			deleteFirst();
		}else if(pos == count){
			deleteLast();
		}else{
			trv *temp = head;
			trv *temp1 = NULL;
			while(pos-2){
				temp = temp->next;
				pos--;
			}
			temp1 = temp->next;
			temp->next = temp->next->next;
			free(temp1);
		}
		return 0;
	}
}

void main(){
	char choice;
	do{
		printf("1.addNode\n");
		printf("2.addFirst\n");
		printf("3.addAtPos\n");
		printf("4.printLL\n");
		printf("5.countNode\n");
		printf("6.deleteFirst\n");
		printf("7.deleteLast\n");
		printf("8.deleteAtPos\n");
		
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
				printLL();
				break;
			case 5:
				printf("No of nodes = %d\n",countNode());
				break;
			case 6:
				deleteFirst();
				break;
			case 7:
				deleteLast();
				break;
			case 8:
				{
					int pos;
					printf("Enter position to delete node\n");
					scanf("%d", &pos);
					deleteAtPos(pos);
				}
				break;
			default :
				printf("Wrong choice\n");
		}
		getchar();
		printf("Do you want to continue\n");
		scanf("%c", &choice);
	}while(choice == 'Y' || choice == 'y');
}

