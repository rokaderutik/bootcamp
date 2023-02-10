//strlen
#include <stdio.h>

int strlen(char *str);
void main(){
	char name[] = {'R','u','n','a','n','\0'};
	char *str  = "Rutik Rokade";

	int len1 = strlen(name);
	int len2 = strlen(str);

	printf("%d\n %d\n", len1, len2);
}
int strlen(char str[]){
	int len = 0;
	while(*str != '\0'){
		len++;
		str++;
	}
	return len;
}
