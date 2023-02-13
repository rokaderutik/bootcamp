#include <stdio.h>

void main(){
	FILE *fp = fopen("abc2.txt", "w");

	fprintf(stdout,"%ld\n", ftell(fp));

	fprintf(fp, "King Rokade");

	printf("%ld\n", ftell(fp));

	fprintf(fp, "\nThe Rokade's");

	rewind(fp);
	fprintf(stdout, "%ld\n", ftell(fp));

	fprintf(fp, "\nRokade Industries Ltd.");
	printf("%ld\n", ftell(fp));
}
