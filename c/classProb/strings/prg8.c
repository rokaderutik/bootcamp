#include <stdio.h>

char *strcpy(char *dest, const char *src);
void main(){
	char *src = "Runan Shet";
	char dest[20];

	puts(src);
	puts(dest);

	strcpy(dest, src);

	puts(src);
	puts(dest);
}
