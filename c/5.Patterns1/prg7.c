//prg7
/*	1	2	9	4
 *	25	6	49	8
 *	81	10	121	12
 *	169	14	225	16
 */

#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	int n=1;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=4; j++){
			if(n%2==0){
				printf("%d\t",n);
			}else{
				printf("%d\t",n*n);
			}
			n++;
		}
		printf("\n");
	}
}
