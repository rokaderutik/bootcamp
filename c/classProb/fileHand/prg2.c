#include <stdio.h>
void main(){
	FILE *fp = fopen("ab/xyz.txt", "w");
	printf("%p\n", fp);

	FILE *fp1 = fopen("xyz.txt", "w");
	printf("%p\n", fp1);

}
