//prg2
//WAP to character whose ASCII is even

#include<stdio.h>

void main(){
	for(int i=0; i<=127; i++){
		if(i%2==0){
			printf("%c\n",i);
		}
	}
}
