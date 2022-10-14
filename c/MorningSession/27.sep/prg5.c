/*prg5
 *	A		A
 *	C B A		C B A
 *	E D C B A	E D C B A
 *	C B A		E D C B A
 *	A		C B A
 *			A
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter n. of rows\n");
	scanf("%d",&row);

	int x;
	if(row%2==0)
		x=0;
	else
		x=1;

	for(int i=1; i<=row; i++){
		if(i<=row/2 + x){
			for(int j=1; j<=2*i-1; j++){
				printf("%c ",64+2*i-j);
			}
		}else{
			for(int j=1; j<= 2*row+1-2*i; j++){
				printf("%c ",66+2*row-j-2*i);
			}
		}
		printf("\n");
	}
}
