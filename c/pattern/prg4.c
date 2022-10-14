/* A
 * C E
 * G I K
 */

#include<stdio.h>
void main(){
	int row;
	char ch='A';
	printf("Enter rows\n");
	scanf("%d",&row);
	for(int i=1; i<=row; i++){
		for(int j=1; j<=i; j++){
			printf("%c ",ch);
			ch+=2;
		}
		printf("\n");
	}
}
