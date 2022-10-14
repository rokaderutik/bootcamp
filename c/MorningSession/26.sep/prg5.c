/*prg5
 *	A
 *	C B A
 *	E D C B A
 *	G F E
 *	I
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	
	int x;
	if(row%2==0){   //row even odd check
		x=0;	
	}else{
		x=1;
	}
	for(int i=1; i<=row; i++){
		if(i<=row/2 + x){	//adding x as per row odd or even
			for(int j=1; j<=2*i-1; j++){
				printf("%c ",64+2*i-j);
			}
		}else{
			for(int j=1; j<=2*row +1-2*i; j++){
				printf("%c ",64+2*i-j);
			}
		}
		printf("\n");

	}
}
