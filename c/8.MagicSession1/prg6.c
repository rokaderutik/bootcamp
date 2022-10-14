//prg6
//	D	e	F	g
//	e	D	c	B
//	F	g	H	i
//	g	F	e	D
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	char ch1='D',ch2='d';
	for(int i=1; i<=row; i++){
		char ch3=ch1,ch4=ch2;
		for(int j=1; j<=4; j++){
			if(i%2==1){
				if(j%2==0){
					printf("%c\t",ch4);
				}else{
					printf("%c\t",ch3);
				}
				ch3++;
				ch4++;
			}else{
				if(j%2==0){
					printf("%c\t",ch3);
				}else{
					printf("%c\t",ch4);
				}
				ch3--;
				ch4--;
			}
		}
		printf("\n");
		ch1++;
		ch2++;
	}
}
