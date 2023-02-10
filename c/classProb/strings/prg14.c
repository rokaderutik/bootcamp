#include <stdio.h>
void mystrrev(char *arr){
	char *ptr = arr;
	while(*ptr != '\0')
		ptr++;
	ptr--;
	char temp;
	while(ptr > arr){
		temp = *ptr;
		*ptr = *arr;
		*arr = temp;
		ptr--;
		arr++;
	}
}

void main(){
	char arr[] = {'R','u','n','a','n','\0'};

	puts(arr);

	mystrrev(arr);

	puts(arr);
}
