#include <stdio.h>
void main(){
	FILE *fp = fopen("abc3.txt", "r+");
	printf("%d\n", getw(fp));

	fprintf(fp, "RUNAN SHET");

	fclose(fp);
	
	fp = fopen("abc3.txt", "r");
	char ch;
	while((ch = fgetc(fp)) != EOF){
		printf("%c", ch);
	}
}
