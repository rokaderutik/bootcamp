//prg1
//stack using array

#include <stdio.h>
int top = -1;
int size = 0;
int flag = 0;

int push(int stack[]){
	if(top == size-1){
		printf("stack overflow\n");
		return -1;
	}else{
		printf("Enter data\n");
		scanf("%d", &stack[++top]);
		return 0;
	}
}

int pop(int *stack){
	if(top == -1){
		printf("stack underflow\n");
		flag = 0;
		return -1;
	}else{
		int ret = stack[top];
		top--;
		flag = 1;
		return ret;
	}
}

int peak(int stack[]){
	if(top == -1){
		printf("stack underflow\n");
		flag = 0;
		return -1;
	}else{
		flag = 1;
		return stack[top];
	}
}

void main(){
	char choice;

	printf("Enter stack size\n");
	scanf("%d", &size);

	int stack[size];

	do{
		printf("1.push()\n");
		printf("2.pop()\n");
		printf("3.peak()\n");

		int ch;
		printf("Enter your choice\n");
		scanf("%d", &ch);

		switch(ch){
			case 1:
				push(stack);
				break;
			case 2:
				{
					int ret = pop(stack);
					if(flag == 1)
						printf("%d popped\n", ret);
				}
				break;
			case 3:
				{
					int ret = peak(stack);
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
