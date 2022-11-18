//o/p may be
//30
//(nil)
//segmentation as we are acessing address of local variable 
//after getting stack of fun() pop there may be chance of getting those area address to other process

#include<stdio.h>
int * fun(int x,int y){
	printf("%d\n",x+y);
	int val;
	val=x+y;
	
	return &val;	//returning address of local variable
}
void main(){
	int *ptr=fun(10,20);
	printf("%p\n",ptr);
	printf("%p\n",*ptr);
}
