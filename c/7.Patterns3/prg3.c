//prg3
/*	4 a 3 b
 *	4 a 3 b
 *	4 a 3 b
 *	4 a 3 b
 */

#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		int n=4;
		char ch='a';
		for(int j=1; j<=4; j++){
			if(j%2==1){
				printf("%d\t",n);
				n--;
			}else{
				printf("%c\t",ch);
				ch++;
			}
		}
		printf("\n");
	}
}
