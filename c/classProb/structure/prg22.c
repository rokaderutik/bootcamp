//typedef  --> allices to datatype  -->  second name
#include<stdio.h>
struct Employee{
	int empId;
	char empName[20];
	float empSal;
};
void main(){
	Employee obj1={14700,"Jeevan",95.85};	//error  :as no typedef we have to use "struct Employee obj"
}
