/* 				1
 *  			1	2
 *  		2	3	5
 *  	5	7	10	15
 *15	20	27	37	52
 BELL no
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter rows\n");
	scanf("%d",&row);

	int x=1;
	for(int i=0; i<row; i++){
		for(int sp=row; sp>i+1; sp--){
			printf("\t");
		}
		for(int j=0; j<=i; j++){
			x=x+i+j-1;
			printf("%d\t",x);
		}
		printf("\n");
	}
}
