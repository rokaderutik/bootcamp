/*prg5
 *	a
 *	b	c
 *	d	e	f
 *	g	h
 *	i
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	
	char ch='a';
	for(int i=1; i<=row; i++){
		if(i<=row/2){
			for(int j=1; j<=i; j++){
				printf("%c\t",ch++);
			}
			printf("\n");
		}else{
			for(int j=row; j>=i; j--){
				printf("%c\t",ch++);
			}
			printf("\n");
		}
	}
}
