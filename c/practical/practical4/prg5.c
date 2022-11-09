//prg5
//concate string
#include<stdio.h>
void mystrconcate(char *str1, char *str2){
	while(*str1!='\0'){
		str1++;
	}
	while(*str2!='\0'){
		*str1=*str2;
		str1++;
		str2++;
	}
	*str1='\0';
}
void main(){
	char str1[20];
	char str2[10];

	printf("Enter string 1\n");
	gets(str1);

	printf("Enter string 2\n");
	gets(str2);

	mystrconcate(str1,str2);

	puts(str1);
}
