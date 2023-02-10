//compare 2 strings

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool compare(char *str1, char *str2, int len){
	if(len == 0)
		return true;

	if(str1[len] != str2[len])
		return false;

	return compare(str1, str2, len-1);
}

void main(){
	char *str1 = "Runan";
	char *str2 = "Rokade";
	char *str3 = "Runan";

	if(strlen(str1) == strlen(str2))
		printf("%d\n", compare(str1, str2,strlen(str1)-1));
	else
		printf("%d\n", 0);
	
	if(strlen(str1) == strlen(str3))
                printf("%d\n", compare(str1, str3,strlen(str1)-1));
        else
                printf("%d\n", 0);
}
