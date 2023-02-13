#include <stdio.h>
void main(){
	printf("c2w\n");

	//fclose(stdout);
	
	FILE *fp = fopen("abc3.txt", "r");

	printf("%c\n", fgetc(fp));
	printf("%c\n", fgetc(fp));

	fclose(fp);
	printf("%c\n", fgetc(fp));
}
