/*	D	c	B	a
 *	a	B	c	D
 *	F	e	D	c
 *	b	C	d	E
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int j=1; j<=row; j++){
			if((i+j)%2==0){
				if(i%2==1){
					printf("%c\t",64+row+i-j);
				}else{
					printf("%c\t",64+(i/2)-1+j);
				}
			}else{
				if(i%2==1){
					printf("%c\t",96+row+i-j);
				}else{
					printf("%c\t",96+(i/2)-1+j);
				}
			}
		}
		printf("\n");
	}
}
