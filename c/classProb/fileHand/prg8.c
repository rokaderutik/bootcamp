#include <stdio.h>
void main(){
	FILE *fp1 = fopen("abc3.txt", "r");
	FILE *fp2 = fopen("abc4.txt", "w");

	char ch;
	while((ch = fgetc(fp1)) != EOF)
		fputc(ch, fp2);

	FILE *fp3 = fopen("abc5.txt", "w");

	rewind(fp1);
	int cnt = 0;
        while(cnt != 10){
		ch = fgetc(fp1);
                fputc(ch, fp3);
		cnt++;
	}
}
