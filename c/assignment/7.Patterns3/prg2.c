//prg2
/*	3 b 1 d
 *	a 2 c 0
 *	3 b 1 d
 *	a 2 c 0
 */

#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		int n=3;
		char ch='a';
		for(int j=1; j<=4; j++){
			if(i%2==1){
				if(j%2==1){
					printf("%d\t",n);
				}else{
					printf("%c\t",ch);
				}
			}else{
				if(j%2==0){
					printf("%d\t",n);
				}else{
					printf("%c\t",ch);
				}
			}
			n--;
			ch++;
		}
		printf("\n");
	}
}
