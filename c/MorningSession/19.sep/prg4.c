/*	5	4	3	2	1
 *	D	C	B	A
 *	3	2	1
 *	B	A
 *	1
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		char ch=65+row-i;
		int x=row+1-i;

		for(int j=row; j>=i; j--){
			if(row%2==0){
				if(i%2==0){
					printf("%d\t",x);
					x--;
				}else{
					printf("%c\t",ch);
					ch--;
				}
			}else{
				if(i%2==0){
					printf("%c\t",ch);
					ch--;
				}else{
					printf("%d\t",x);
					x--;
				}
			}
		}
		printf("\n");
	}
}
