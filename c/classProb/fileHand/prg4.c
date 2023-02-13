#include <stdio.h>

void main(){
	int x=10;
	int y= 0;
	printf("%d\n%d\n", x, y);

	fscanf(stdin, "%d", &x);

	printf("%d\n", x);

	FILE *fp = fopen("c2w.txt", "r");
	char ch;
	char *str;

	fscanf(fp, "%c", &ch);
	fscanf(fp, "%s", str);
	printf("%c\n", ch);
	puts(str);
}
