//prg1
//WAP to calculate length of string using mystrlen()
#include<stdio.h>
int mystrlen(char *str){
	int count=0;
	while(*str != '\0'){
		count++;
		str++;
	}
	return count;
}
void main(){
	char str[20];
	printf("Enter a string\n");
	gets(str);

	printf("Length of string=%d\n",mystrlen(str));
}
