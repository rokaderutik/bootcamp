/*prg2
 *				d
 *			C	d
 *		b	C	d
 *	A	b	C	d
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int sp=row; sp>i; sp--){
			printf(" \t");
		}
		for(int j=1; j<=i; j++){
			if((i+j)%2==0){
				printf("%c\t",96+row+j-i);
			}else{
				printf("%c\t",64+row+j-i);
			}
		}
		printf("\n");
	}
}
