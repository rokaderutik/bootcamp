//pallindrome recursive

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool pallindrome(char *str, int start, int end){
	if(start >= end)
		return true;

	if(str[start] != str[end])
		return false;

	return pallindrome(str, start+1, end-1);
}
void main(){
	char *str = "MOM";
	int size = strlen(str);
	
	bool ret = pallindrome(str, 0, size-1);

	if(ret == 1)
		printf("Pallindrome\n");
	else
		printf("Not Pallindrome\n");
}
