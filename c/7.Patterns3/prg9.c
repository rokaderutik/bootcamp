//prg9
/*	0	1	1	2
 *	3	5	8	13
 *	21	34	55	89
 *	144	233	377	610
 */

#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	
	int a=0,b=1,c;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=4; j++){
			if(i==1 && j==1){
				printf("%d\t",a);
			}else if(i==1 && j==2){
				printf("%d\t",b);
			}else{
				c=a+b;
				printf("%d\t",c);
				a=b;
				b=c;
			}
		}
		printf("\n");
	}
}
