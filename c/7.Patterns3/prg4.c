//prg4
/*	a B c D
 *	b C d E
 *	c D e F
 */

#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	char ch1='a',ch2='A',ch3=ch1,ch4=ch2;
	for(int i=1; i<=row; i++){
		ch1=ch3;
		ch2=ch4;
		for(int j=1; j<=4; j++){
			if(j%2==0){
				printf("%c\t",ch2);
			}else{
				printf("%c\t",ch1);
			}
			ch1++;
			ch2++;
		}
		printf("\n");
		ch3++;
		ch4++;
	}
}
