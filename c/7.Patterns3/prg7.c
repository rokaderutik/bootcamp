//prg7
/*	1	4	27
 *	4	27	16
 *	27	16	125
 */

#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	
	int n1=1;
	for(int i=1; i<=row; i++){
		int n=n1;
		for(int j=1; j<=3; j++){
			if(n%2==0){
				printf("%d\t",n*n);
			}else{
				printf("%d\t",n*n*n);
			}
			n++;
		}
		printf("\n");
		n1++;
	}
}
