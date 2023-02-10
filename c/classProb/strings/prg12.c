#include <stdio.h>

char *mystrcat(char *src, char *concat){
	while(*src != '\0')
		src++;
	while(*concat != '\0'){
		*src = *concat;
		src++;
		concat++;
	}
	*src = '\0';
	return src;
}

void main(){
        char src[20] = {'R','u','n','a','n','\0'};
        char *concat = "Shet";

        puts(src);
        puts(concat);

        mystrcat(src, concat);

        puts(src);
        puts(concat);

}

