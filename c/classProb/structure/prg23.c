//typedef  --> allices to datatype  -->  second name
#include<stdio.h>
typedef struct Employee{
        int empId;
        char empName[20];
        float empSal;
}Emp;	//here Emp is second name/allices
void main(){
        Emp obj1={14700,"Jeevan",95.85};   
}
