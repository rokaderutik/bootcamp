#include <stdio.h>
void main(){
	FILE *fp = fopen("demo.txt", "w+");

	int n1 = 10;
	int n2 = 20;
	
	printf("%p\n", fp);
	printf("%ld\n", ftell(fp));

	putw(n1, fp);
	putw(n2, fp);
	printf("%ld\n", ftell(fp));

	rewind(fp);

	printf("%d\n", getw(fp));
	printf("%d\n", getw(fp));
}
