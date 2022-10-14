//WAP to print whether no is prime or not

#include<stdio.h>
void main(){
	int num;
	printf("Enter no. of rows\n");
	scanf("%d",&num);
	
	int flag=0;
	for(int i=2; i<num; i++){
		if(num%i==0){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("%d is not prime no.\n",num);
	}else{
		printf("%d is prime no.\n",num);
	}
}
