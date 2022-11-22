//self referential structure

#include<stdio.h>
#include<string.h>

typedef struct Employee{
	int empId;
	char empName[20];
	float sal;
	struct Employee *next;	//self referential structure
}Emp;

void main(){
	Emp obj1, obj2, obj3;

	Emp *head = &obj1;

	//filling data
	obj1.empId = 1;
	strcpy(obj1.empName, "Kanha");
	obj1.sal = 50.00;
	obj1.next = &obj2;

	obj2.empId = 2;
        strcpy(obj2.empName, "Bade");
        obj2.sal = 60.00;
        obj2.next = &obj3;

	obj3.empId = 3;
        strcpy(obj3.empName, "Rahul");
        obj3.sal = 80.00;
        obj3.next = NULL;

	//access data
	
	printf("\n%d\n", head->empId);
	printf("%s\n", head->empName);
	printf("%f\n", head->sal);

	printf("\n%d\n", obj1.next->empId);
        printf("%s\n", obj1.next->empName);
        printf("%f\n", obj1.next->sal);

	printf("\n%d\n", obj2.next->empId);
        printf("%s\n", obj2.next->empName);
        printf("%f\n", obj2.next->sal);

}
