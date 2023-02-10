#include <stdio.h>
void printStr(char *str);
void strPrint(char str[]);

void main(){
	char arr[20];
	printf("Enter name\n");
	gets(arr);

	printStr(arr);
	strPrint(arr);
}
void printStr(char *str){
	puts(str);
}
void strPrint(char str[]){
	puts(str);
}
