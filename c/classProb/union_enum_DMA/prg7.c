//union
#include<stdio.h>
union Employee{
	int empId;
	float sal;
};
void main(){
	//problem with this way of assignment
	
	union Employee emp1={10,50.23};	//warning:excess element

	//correct way
	
	union Employee emp2;

	emp2.empId=15;
	printf("%d\n",emp2.empId);

	emp2.sal=64.23;
	printf("%f\n",emp2.sal);
}
