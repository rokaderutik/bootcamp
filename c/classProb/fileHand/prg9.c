#include <stdio.h>
void main(){
	FILE *fp = fopen("abc3.txt", "a+");
	char arr[20];

	fgets(arr, 11, fp);
	puts(arr);

	fputs(arr, fp);

}
