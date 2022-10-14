/*  A B C
 *  D E
 *  F
 */

#include<stdio.h>
void main(){
	int row;
	char ch='A';
	printf("Enter rows\n");
	scanf("%d",&row);
	
	for(int i=1; i<=row; i++){
		for(int j=row; j>=i; j--){
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
