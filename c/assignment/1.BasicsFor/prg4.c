//prg4
//WAP to print even numbers b/n 1-100

#include<stdio.h>

void main(){
	int i;
	for(i=1; i<=100; i++){
		if(i%2==0)
			printf("%d\n",i);
	}
}
