#include <stdio.h>

char *strcat(char *src, char *concat);

void main(){
	char src[20] = {'R','u','n','a','n','\0'};
	char *concat = "Shet";

	puts(src);
	puts(concat);

	strcat(src, concat);
	
	puts(src);
	puts(concat);

}
