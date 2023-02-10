//compare 2 strings upto n characters

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool compareN(char *str1, char *str2, int index, int N){
	if(index == N)
		return true;

	if(str1[index] != str2[index])
		return false;

	return compareN(str1, str2, index+1, N);
}

void main(){
	char *str1 = "Runan";
	char *str2 = "Rokade";
	char *str3 = "Runu";

	if(strlen(str1) >= 3 && strlen(str2) >=3)
		printf("%d\n", compareN(str1, str2,0 ,3));
	else
		printf("%d\n", 0);
	
	if(strlen(str1) >= 3 && strlen(str3) >=3)
                printf("%d\n", compareN(str1, str3, 0, 3));
        else
                printf("%d\n", 0);
}
