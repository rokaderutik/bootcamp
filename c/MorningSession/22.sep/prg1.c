/*prg1  rows=4						rows=3
 *	4	5	6	7			3	4	5
 *	8	10	12	14			6	8	10
 *	12	15	18	21			9	12	15
 *	16	20	24	28
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	
	int x;
	for(int i=1; i<=row; i++){
		x=row*i;
		for(int j=1; j<=row; j++){
			if(j==1){
				printf("%d\t",x);
			}else{
				printf("%d\t",x+i);
				x=x+i;
			}
		}
		printf("\n");
	}
}
