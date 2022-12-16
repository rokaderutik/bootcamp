//prg2
//stack using SLL

#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
	int data;
	struct stack *next;
}stack;

stack *head = NULL;
stack *top = NULL;
int flag = 0;
int size = 0, cnt = 0;

stack *createNode(){
	stack *newNode = (stack *)malloc(sizeof(stack));

	printf("Enter data\n");
	scanf("%d", &newNode->data);

	newNode->next = NULL;

	return newNode;
}

int push(){
	if(size == cnt){
		printf("stack Overflow\n");
		return -1;
	}else{
		stack *newNode = createNode();
		if(head == NULL){
			head = newNode;
		}else{
			stack *temp = head;
			while(temp->next != NULL)
				temp = temp->next;

			temp->next = newNode;
		}
		cnt++;
		top = newNode;
		return 0;
	}
}

int pop(){
	if(top == NULL){
		printf("stack underflow\n");
		flag = 0;
		return -1;
	}else{
		int ret = top->data;

		if(head->next == NULL){
			free(head);
			head = NULL;
			top = NULL;
		}else{
			stack *temp = head;
			while(temp->next->next != NULL)
				temp = temp->next;
			
			temp->next = NULL;
			free(top);
			top = temp;
		}
		flag = 1;
		cnt--;
		return ret;
	}
}

int peak(){
	if(head == NULL){
		printf("stack underflow\n");
		flag = 0;
		return -1;
	}else{
		flag = 1;
		return top->data;
	}
}

void main(){
	char choice;

	printf("Enter stack size\n");
	scanf("%d", &size);

	do{
		printf("1.push()\n");
		printf("2.pop()\n");
		printf("3.peak()\n");

		int ch;
		printf("Enter your choice\n");
		scanf("%d", &ch);

		switch(ch){
			case 1:
				push();
				break;
			case 2:
				{
					int ret = pop();
					if(flag == 1)
						printf("%d popped\n", ret);
				}
				break;
			case 3:
				{
					int ret = peak();
					if(flag == 1)
						printf("%d\n", ret);
				}
				break;
			default :
				printf("Wrong choice\n");
		}

		getchar();
		printf("Do you want to continue?\n");
		scanf("%c", &choice);
	}while(choice == 'Y' || choice == 'y');
}
