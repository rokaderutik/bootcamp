#include <stdio.h>
void main(){
	FILE *fp = fopen("c2w.txt", "r+");
	fprintf(fp, "Exception");

	fclose(fp);

	fp = fopen("abc1.txt", "a");
	fprintf(fp, "RUNAN runan");
}
