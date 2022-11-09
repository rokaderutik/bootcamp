//prg1
//WAP to print first 10 capital alphabets

#include<stdio.h>

void main(){
	char ch;
	printf("Enter a capital A\n");
	scanf("%c",&ch);
	for(ch; ch<=74; ch++){		//for(ch; ch<='J'; ch++)
		printf("%c\t",ch);
	}

}
