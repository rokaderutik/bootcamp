#include <stdio.h>
void main(){
	FILE *fp = fopen("abc3.txt", "r");

	fseek(fp, 10,0);
	char ch;
	while((ch = fgetc(fp)) != EOF)
		printf("%c", ch);

	rewind(fp);

	fseek(fp, -7,3);
       
        while((ch = fgetc(fp)) != EOF)
                printf("%c", ch);

}
