/*prg4	row=4
 *	1	b	2	d
 *		1	b	2
 *			1	b
 *				1
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int sp=1; sp<i; sp++){
			printf(" \t");
		}

		int x=1;
		for(int j=row; j>=i; j--){
			if(j%2==0){
				printf("%d\t",x);
				x++;
			}else{
				printf("%c\t",97+row-j);
			}
		}
		printf("\n");
	}
}
