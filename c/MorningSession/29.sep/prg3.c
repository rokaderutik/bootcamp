/*prg3
 *			1
 *		2	4
 *	3	6	9
 *4	8	12	16
 	5	10	15
		6	12
			7
*/
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		if(i<=(row+1)/2){
			for(int sp=(row+1)/2; sp>i; sp--){
				printf(" \t");
			}
			for(int j=1; j<=i; j++){
				printf("%d\t",i*j);
			}
		}else{
			for(int sp=row/2+1; sp<i; sp++){
				printf(" \t");
			}
			for(int j=1; j<=row+1-i; j++){
				printf("%d\t",i*j);
			}
		}
		printf("\n");
	}
}
