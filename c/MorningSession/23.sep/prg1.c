/*prg1
 *	A	B	C	D
 *		A	B	C
 *			A	B
 *				A
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter a no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
	/*	for(int sp=1; sp<i; sp++){
			printf("\t");
		}
		for(int j=row; j>=i; j--){
			printf("%c\t",65+row-j);
		}
		printf("\n");
	}	*/
		
		for(int j=1; j<=row; j++){
			if(j<i){
				printf(" \t");
			}else{
				printf("%c\t",65+j-i);
			}
		}
		printf("\n");
	}
}
