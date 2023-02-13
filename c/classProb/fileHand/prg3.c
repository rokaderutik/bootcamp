#include <stdio.h>

void main(){
	FILE *fp = fopen("c2w.txt", "r");
	printf("%p\n", fp);

	fprintf(stdout, "core2web\n");

	fp = fopen("c2w.txt", "w");
	printf("%p\n", fp);

	fprintf(fp, "file handling in c\n");
}
