/*prg4
 * 	D	C	B	A
 * 	c	b	a
 * 	B	A
 * 	a
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int j=row; j>=i; j--){
			if(i%2==0){
				printf("%c\t",97+j-i);
			}else{
				printf("%c\t",65+j-i);
			}
		}
		printf("\n");
	}
}

