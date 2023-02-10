#include <stdio.h>
#include <string.h>

char *mystrncpy(char *dest, char *src, int n){
        /*
	if(n > strlen(src))
		n = strlen(src);

	while(n){
                *dest = *src;
		src++;
		dest++;
		n--;
        }
	*/
	while(n != 0 && *src != '\0'){
                *dest = *src;
                src++;
                dest++;
                n--;
        }

        return dest;
}
void main(){
        char *src = "Runan";
	char dest[10];
	int n=4;

        puts(src);
        puts(dest);

        mystrncpy(dest, src, n);

        puts(src);
        puts(dest);

	mystrncpy(dest, src, 8);

        puts(src);
        puts(dest);

}

