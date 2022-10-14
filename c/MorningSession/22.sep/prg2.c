/*prg2	row=4					row=3
 *	4	9	14	19		3	7	11
 *	8	14	20	26		6	11	16
 *	12	19	26	33		9	15	21
 *	16	24	32	40
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	
	int x,y;
	for(int i=1; i<=row; i++){
		x=row*i;
		y=row+i;
		for(int j=1; j<=row; j++){
			if(j==1){
				printf("%d\t",x);
			}else{
				printf("%d\t",x+y);
				x=x+y;
			}
		}
		printf("\n");
	}
}
