/*	E	E	E	E	E
 *	4	4	4	4
 *	C	C	C
 *	2	2
 *	A
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
					printf("%c\t",ch);
				}else{
					printf("%d\t",x);
				}
			}else{
				if(i%2==0){
					printf("%d\t",x);
				}else{
					printf("%c\t",ch);
				}
			}
		}
		printf("\n");
	}
}
