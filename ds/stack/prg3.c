//prg3
//stack using array of structure
//means we are storing object of structure in array

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top = -1;
int size = 0;
int flag = 0;

typedef struct company{
	char cName[30];
	int noEmp;
	float rev;
}cmp;

cmp* push(cmp* stack[]){
	if(top == size-1){
		//stack is full so no object creation
		printf("stack overflow\n");
		return -1;
	}else{
		//create object
		cmp *obj = (cmp *)malloc(sizeof(cmp));
		
		//fill data in structure object
		getchar();
		printf("Enter company name\n");
		gets(obj->cName);
		printf("Enter no of employee's\n");
		scanf("%d", &obj->noEmp);
		printf("Enter revenue in crores\n");
		scanf("%f", &obj->rev);

		//pass object to array or stack
		stack[++top] = obj;

		return 0;
	}
}

cmp* pop(cmp* *stack){
	if(top == -1){
		printf("stack underflow\n");
		flag = 0;
		return -1;
	}else{
		cmp *ret = stack[top];
		top--;
		flag = 1;
		return ret;
	}
}

cmp* peak(cmp* stack[]){
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

	cmp* stack[size];

	do{
		printf("1.push()\n");
		printf("2.pop()\n");
		printf("3.peak()\n");

		int ch;
		printf("Enter your choice\n");
		scanf("%d", &ch);
		//getchar();

		switch(ch){
			case 1:
				push(stack);
				break;
			case 2:
				{
					cmp* ptr = pop(stack);
					if(flag == 1)
						printf("|%s - %d - %.2f| popped\n", ptr->cName, ptr->noEmp, ptr->rev);
				}
				break;
			case 3:
				{
					cmp* ptr = peak(stack);
					if(flag == 1)
						printf("|%s - %d - %.2f|\n", ptr->cName, ptr->noEmp, ptr->rev);
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
