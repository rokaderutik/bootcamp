/*prg3
 *	3	d	2	c
 *		d	2	c
 *			1	d
 *				d
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter a no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int sp=1; sp<i; sp++){
			printf(" \t");
		}
		
		int x=row-i;
		char ch=96+row;
		for(int j=row; j>=i; j--){
			if((i+j)%2==0){
				printf("%c\t",ch);
				ch--;
			}else{
				printf("%d\t",x);
				x--;
			}
		}
		printf("\n");
	}
}
