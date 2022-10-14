/* WAP to take string from user & print pattern like below
 * i/p: core2web
 * o/p: c o r e 2 w e b
 *        o r e 2 w e b
 *          r e 2 w e b
 *            e 2 w e b
 *              2 w e b
 *                w e b
 *                  e b
 *                    b
 */
#include<stdio.h>
#include<string.h>
void main(){
	char str[20];
	printf("Enter a string\n");
	gets(str);

	int len=strlen(str);

	for(int i=0; i<len; i++){
		/*for(int sp=0; sp<i; sp++){
			printf("  ");
		}
		for(int j=i; j<len; j++){
			printf("%c ",str[j]);
		}*/
		for(int j=0; j<len; j++){
			if(j<i){
				printf("  ");
			}else{
				printf("%c ",str[j]);
			}
		}
		printf("\n");
	}
}
