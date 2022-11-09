//prg2
/*	1	2	3
 *	a	b	c
 *	1	2	3
 *	a	b	c
 */

#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int j=1; j<=3; j++){
			if(i%2==1){
				printf("%d\t",j);
			}else{
				printf("%c\t",j+96);
			}
		}
		printf("\n");
	}
}
