/*prg5
 *	a
 *	a	b
 *	a	b	c
 *	a	b	c	d
 *	a	b	c
 *	a	b
 *	a
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter a no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		if(i<=row/2){
			for(int j=1; j<=i; j++){
				printf("%c\t",96+j);
			}
			printf("\n");
		}else{
			for(int j=row; j>=i; j--){
				printf("%c\t",97+row-j);
			}
			printf("\n");
		}
	}
}
