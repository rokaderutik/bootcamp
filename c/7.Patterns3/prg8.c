//prg8
/*	16	15	14	13
 *	L	K	J	I
 *	8	7	6	5
 *	D	C	B	A
 */

#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	
	char ch='A' + row*4 - 1;
	int n=row*4;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=4; j++){
			if(i%2==1){
				printf("%d\t",n);
			}else{
				printf("%c\t",ch);
			}
			ch--;
			n--;
		}
		printf("\n");
	}
}
