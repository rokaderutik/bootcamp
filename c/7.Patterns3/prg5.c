//prg5
/*	1	4	3
 *	16	5	36
 *	7	64	9
 */

#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	
	int n=1;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=3; j++){
			if(n%2==0){
				printf("%d\t",n*n);
			}else{
				printf("%d\t",n);
			}
			n++;
		}
		printf("\n");
	}
}
