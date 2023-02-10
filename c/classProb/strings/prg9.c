#include <stdio.h>

char *mystrcpy(char *dest, const char *src){
	while(*src != '\0'){
		*dest  = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return dest;
}
void main(){
        char *src = "Runan Shet";
        char dest[20];

        puts(src);
        puts(dest);

        mystrcpy(dest, src);

        puts(src);
        puts(dest);
}

